#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/navigation/base_local_planner"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/install_isolated/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/install_isolated/lib/python2.7/dist-packages:/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/base_local_planner/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/base_local_planner" \
    "/usr/bin/python" \
    "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/src/navigation/base_local_planner/setup.py" \
    build --build-base "/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/build_isolated/base_local_planner" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/install_isolated" --install-scripts="/home/thor/Dropbox/DTU_5_sem/Ros/masterTank/install_isolated/bin"
