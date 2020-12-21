# XD75

TODO
based on davidrambo and boy_314

installare https://github.com/dfu-programmer/dfu-programmer
make xd75:rmbq

premere 'reset' sulla tastiera

sudo dfu-programmer atmega32u4 erase

sudo dfu-programmer atmega32u4 flash xd75_rmbq.hex

sudo dfu-programmer atmega32u4 reset
