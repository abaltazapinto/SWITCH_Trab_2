#include <avr/io.h>

#define F_CPU 16000000UL

static void pwm_init(void)
{
    /* PB7 = OC2 como saída | PB7 = PWM (OC2) | PB5/ PB6 = direcao */
    DDRB |= (1 << PB7) | (1 << PB5) | (1 << PB6);

    /* sentido fixo para teste: Dir0 = 1, Dir1 = 0 */
    PORTB |= (1 << PB5);
    PORTB &= ~(1 << PB6);

    /*
     * Timer2 em Fast PWM
     * saída não invertida em OC2
     * prescaler = 256
     */
    TCCR2 = (1 << WGM21) | (1 << WGM20)   /* Fast PWM */
          | (1 << COM21)                  /* non-inverting */
          | (1 << CS22)  | (1 << CS20);   /* prescaler 256 */

    /* ~50% duty cycle */
    OCR2 = 128;

    /* sentido fixo do motor: exemplo */
    DDRB |= (1 << PB5) | (1 << PB6);
    PORTB |= (1 << PB5);
    PORTB &= ~(1 << PB6);
}

int main(void)
{
    pwm_init();

    while (1)
    {
    }
}