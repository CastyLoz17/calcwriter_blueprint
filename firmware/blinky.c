#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // outputs
    DDRD |= (1 << PD7);
    DDRE |= (1 << PE6);
    DDRB |= (1 << PB7);

    // turn on calc power and stall led
    PORTD |= (1 << PD7);
    PORTE |= (1 << PE6);

    while (1)
    {
        // blinks act led
        PORTB ^= (1 << PB7);
        _delay_ms(1000);
    }
}
