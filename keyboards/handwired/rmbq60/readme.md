# rmbq_60

Make example for this keyboard (after setting up your build environment):

    make handwired/rmbq60:default

    qmk compile -kb rmbq60 -km default

Flashing example for this keyboard:

    make handwired/rmbq60:default:flash

    sudo avrdude -P /dev/ttyACM0 -v -patmega32u4 -cavr109 -b57600 -D -Uflash:w:handwired_rmbq60_default.hex:i
