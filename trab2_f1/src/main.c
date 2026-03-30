#include <avr/io.h>

#define F_CPU 16000000UL

static void pwm_init(void)
{
    /* PB7 = OC2 como saída */
    DDRB |= (1 << PB7);

    /* * Timer2 em Phase Correct PWM  |* saída não invertida |* prescaler = 64*/
    TCCR2 = (1 << WGM20) | (1 << COM21) | (1 << CS21) | (1 << CS20)

    /* ~50% duty cycle */
    OCR2 = 128;

}

int main(void)
{
    pwm_init();

    while (1)
    {
    }
}