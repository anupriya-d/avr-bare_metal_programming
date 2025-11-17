#define F_CPU 16000000UL      // 16 MHz clock
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // Set PB5 (digital pin 13) as output
    DDRB |= (1 << DDB5);

    while (1) {
        // Turn LED ON
        PORTB |= (1 << PORTB5);
        _delay_ms(2000);

        // Turn LED OFF
        PORTB &= ~(1 << PORTB5);
        _delay_ms(500);
    }
}


//blink LED for arduino nano
