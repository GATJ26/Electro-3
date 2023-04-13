#include "config.h"
#include <math.h>
#define FCY  4000000 // Depende de la frecuencia de operacion 
#include <stdio.h>
#include <libpic30.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int V1=0;
int V2=0;
int V3=0;

int derivada1=0;
int derivada2=0;
int derivada3=0;

int ECG1=0;
int ECG2=0;
int ECG3=0;

main(){
    AD1PCFG = 0x000E;
    TRISB = 0b11111111;
    V1 = PORTBbits.RB0;
    V2 = PORTBbits.RB1;
    V3 = PORTBbits.RB2;
    derivada1= PORTBbits.RB3;
    derivada2= PORTBbits.RB4;
    derivada3= PORTBbits.RB5;
    
    
    while(1){
        if (derivada1==1){
            ECG1=V2-V3;
           // En la pantalla OLED al oprimer el boton, se mostrara la primera derivada (ECG1)
        };
        if (derivada2==1){
            ECG2=V1+V3;
           // En la pantalla OLED al oprimer el boton, se mostrara la segunda derivada (ECG2)
        };
        if (derivada3==1){
            ECG3=V2-V1;
           // En la pantalla OLED al oprimer el boton, se mostrara la tercera derivada (ECG3)
        };
    };
    
    




};
