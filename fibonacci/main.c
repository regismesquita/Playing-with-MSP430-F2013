#include "msp430.h"
#include "operacoes.h"

int main(void)
{
  int fibonacci_num = 0;
  WDTCTL = WDTPW + WDTHOLD;             // Stop watchdog timer
  P1DIR |= 0x01;                        // Set P1.0 to output direction
  P1OUT = 0x00;                         // Turn Off led.
  for(;;){
    fibonacci_num++;
    piscar(fibonacci(fibonacci_num));
    esperar(5);
  }
}
