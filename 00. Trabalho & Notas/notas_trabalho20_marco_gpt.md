Fast Pwm vs Phase Correct
    Phase Correct -> mais simetrico -> melhor para motores.
    Fast PWM -> mais simples -> melhor para comecar
Primeiro fast PWM

focar :

    > TCNT
    > OCR
    > COM bits

OC2 e:

    > OUtput compare 2
    > ligado fisicamente a um pino do microcontrolador

No enunciado

    PWM - PB7

logo:

    OC2 = PB7

    Prescaler :
        divide o clock (16mhz)
        controla frequencia

    ex:
        16 MHz / 128 = 125 kHz
    
**OCR2**

    . Nao define duty cycle
    . Nao afeta frequencia directamente

*Frequencia do PWM*

    f_PWM = f_clk / (N * 256)


Aqui: 

    n = prescaler
    256 = contador (0 -> 255)

![alt text](image-9.png)


![alt text](image-10.png)

![alt text](image-11.png)

![alt text](image-12.png)

![alt text](image-13.png)

![alt text](image-14.png)

**IMPORTANTE**

![alt text](image-15.png)

    PERGUNTA

![alt text](image-16.png)

![alt text](image-17.png)

![alt text](image-18.png)

    Importante

![alt text](image-20.png)

![alt text](image-21.png)

![alt text](image-22.png)

    PULL UP 

![alt text](image-23.png)

o tipo de onda (PWM) e definido pelos bits WGM, nao pelo OCR nem pelo prescaler. 

WGM21:0 wve generation mode.

![alt text](image-24.png)



![alt text](image-25.png)