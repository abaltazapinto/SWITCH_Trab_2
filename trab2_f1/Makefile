MCU=atmega128
F_CPU=16000000UL
CC=avr-gcc
CFLAGS=-mmcu=$(MCU) -DF_CPU=$(F_CPU) -Os -Wall -Wextra -std=c11
TARGET=trab2_f1

all: $(TARGET).elf $(TARGET).hex

$(TARGET).elf: src/main.c
	$(CC) $(CFLAGS) $< -o $@

$(TARGET).hex: $(TARGET).elf
	avr-objcopy -O ihex -R .eeprom $< $@

clean:
	rm -f *.elf *.hex