# rmbq_60

Make example for this keyboard (after setting up your build environment):

    make rmbq_60:default

    qmk compile -kb rmbq_60 -km default

Flashing example for this keyboard:

    make rmbq_60:default:flash

    sudo avrdude -P /dev/ttyACM0 -v -patmega32u4 -cavr109 -b57600 -D -Uflash:w:rmbq_60_default.hex:i

