#include <stdio.h>

int main(void){

int pulo[4]={1,2,3,4};

*(pulo+2);//Expressão resulta no valor do terceiro elemento.
*(pulo+4);//Expressão tem-se como resultado o valor do quinto elemento.
pulo+4;//Expressão que tem como resultado endereço o quinto elemento.
pulo+2;//Expressão que tem como resultado o terceiro elemento.
}