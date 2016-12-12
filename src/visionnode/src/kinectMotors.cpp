// Usb control: http://openkinect.org/wiki/Protocol_Documentation#Control_Packet_Structure
#include "kinectMotors.h"

kinectMotors::kinectMotors() : m_num(0) {
}

kinectMotors::~kinectMotors() {
}

bool kinectMotors::Initialize() {
    const XnUSBConnectionString *paths;
    XnUInt32 count;
    XnStatus res;

    // Init OpenNI USB
    res = xnUSBInit();
    if (res != XN_STATUS_OK) {
        xnPrintError(res, "xnUSBInit failed");
        return false;
    }

    // Open all "Kinect motor" USB devices
    res = xnUSBEnumerateDevices(0x045E /* VendorID */, 0x02B0 /*ProductID*/, &paths, &count);
    if (res != XN_STATUS_OK) {
        xnPrintError(res, "xnUSBEnumerateDevices failed");
        return false;
    }

    // Open devices
    XN_USB_DEV_HANDLE h;
    for (XnUInt32 index = 0; index < count; ++index) {
        res = xnUSBOpenDeviceByPath(paths[index], &h);
        if (res != XN_STATUS_OK) {
            xnPrintError(res, "xnUSBOpenDeviceByPath failed");
            return false;
        }
        m_devs[index].SetHandle(h);
    }

    m_num = count;
    return true;
}

bool kinectMotors::Device::Open() {
    if (handle == NULL) return false;

    XnStatus res;
    XnUChar buf[1]; // output buffer

    // Init motors
    res = xnUSBSendControl(handle, (XnUSBControlType) 0xc0, 0x10, 0x00, 0x00, buf, sizeof(buf), 0);
    if (res != XN_STATUS_OK) {
        xnPrintError(res, "xnUSBSendControl failed");
        Close();
        return false;
    }

    res = xnUSBSendControl(handle, XN_USB_CONTROL_TYPE_VENDOR, 0x06, 0x01, 0x00, NULL, 0, 0);
    if (res != XN_STATUS_OK) {
        xnPrintError(res, "xnUSBSendControl failed");
        Close();
        return false;
    }

    m_isOpen = true;

    return true;
}

void kinectMotors::Device::Close() {
    if (m_isOpen) {
        xnUSBCloseDevice(handle);
        m_isOpen = false;
    }
}

bool kinectMotors::Device::Move(int angle) {
    XnStatus res;

    // Send move control requests
    res = xnUSBSendControl(handle, XN_USB_CONTROL_TYPE_VENDOR, 0x31, 2 * angle, 0x00, NULL, 0, 0);

    if (res != XN_STATUS_OK) {
        xnPrintError(res, "xnUSBSendControl failed");
        return false;
    }
    return true;
}

bool kinectMotors::Device::SetLed(int status) {
    XnStatus res;
    res = xnUSBSendControl(handle, XN_USB_CONTROL_TYPE_VENDOR, 0x06, status, 0x00, NULL, 0, 0);

    if (res != XN_STATUS_OK) {
        xnPrintError(res, "xnUSBSendControl failed");
        return false;
    }
    return true;
}

bool kinectMotors::Device::GetStatus(int &status, int &speed, int &angle) {
    XnStatus res;
    XnUChar buf[10] = {0};
    XnUInt32 size = 0;

    res = xnUSBReceiveControl(handle, XN_USB_CONTROL_TYPE_VENDOR, 0x32, 0, 0, buf, 10, &size, 0);

    if (res != XN_STATUS_OK) {
        xnPrintError(res, "xnUSBSendControl failed");
        return false;
    }

    status = static_cast<int>(buf[9]);
    speed = static_cast<int>(buf[1]);
    angle = static_cast<int>(static_cast<char>(buf[8])) / 2;

    return true;
}