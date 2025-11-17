useful commands for setting up 
----------------------------------------------------------------
using usbasb programmer 


sudo apt update
sudo apt install gcc-avr avr-libc avrdude make

next need to install drivers for programmer : 
search on google and easy find it


sudo usermod -aG dialout $USER


compile and flash
----------------------------------------------------------------
avr-gcc -mmcu=atmega328p -DF_CPU=16000000UL -Os -o blink.elf blink.c
avr-objcopy -O ihex blink.elf blink.hex

avrdude -c usbasp -p m328p -U flash:w:blink.hex




ls /dev/ttyUSB*
