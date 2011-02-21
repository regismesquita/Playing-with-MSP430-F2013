#include "operacoes.h"
void esperar( long int segundos ){
  while(segundos!=0){
    volatile unsigned int x=60000;
    
    segundos--;
    do x--;
    while(x != 0);
  }
}

long int fibonacci(long int numero){
  if((numero==1)||(numero==2)){
    return 1;
  } else {
    return fibonacci(numero-1)+fibonacci(numero-2);
  }
}

void piscar(int vezes){
  while (vezes!=0)
  {
    vezes--;
    volatile unsigned int i;            // volatile to prevent optimization

    P1OUT ^= 0x01;                      

    esperar(1);
    
    P1OUT ^= 0x01;                     
    
    esperar(1);
  }
}
