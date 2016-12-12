#ifndef PROJECT_MOTORTILT_H
#define PROJECT_MOTORTILT_H

#include <XnUSB.h>
#include <cstdio>
#include <cstring>
#include <unistd.h>

/**
 * Class to control Kinect's motor.
 */
class kinectMotors {
public:
    enum { MaxDevs = 16 };
    enum LED_STATUS {
        LED_OFF = 0,
        LED_GREEN,
        LED_RED,
        LED_ORANGE,
        LED_BLINK_ORANGE,
        LED_BLINK_GREEN,
        LED_BLINK_RED_ORANGE
    };
    enum STATUS {
        STOPED = 0,
        AT_LIMIT,
        MOVING = 4,
        QUICK_BREAK = 8,
        UNKNOW = -1
    };

    class Device
    {
    private:
        XN_USB_DEV_HANDLE handle;
        bool m_isOpen;

        Device(const Device& d);
        Device& operator =(const Device& d);

    public:
        Device() : handle(NULL), m_isOpen(false) {}
        Device(XN_USB_DEV_HANDLE h) : handle(h), m_isOpen(false) {}
        virtual ~Device() { if (m_isOpen) Close(); }

        void SetHandle(XN_USB_DEV_HANDLE h) { handle = h; }

        /**
         * Open device.
         * @return true if succeeded, false - overwise
         */
        bool Open();

        /**
         * Close device.
         */
        void Close();

        /**
         * Move motor up or down to specified angle value.
         * @param angle angle value
         * @return true if succeeded, false - overwise
         */
        bool Move(int angle);

        /**
         * Set Led Status
         * @param status status code
         * @return true if succeeded, false - overwise
         */
        bool SetLed(int status);

        /**
         * Get current status (status code, speed, angle)
         * @param status motor status code
         * @param speed current speed if in moving
         * @param angle current angle value
         * @return true if succeeded, false - overwise
         */
        bool GetStatus(int& status, int& speed, int& angle);
    };

    kinectMotors();
    virtual ~kinectMotors();

    bool Initialize();
    size_t Count() { return m_num; }
    Device& operator [](const int idx) {
        return m_devs[idx];
    }

private:
    Device m_devs[MaxDevs];
    XnUInt32 m_num;
};

#endif //PROJECT_MOTORTILT_H
