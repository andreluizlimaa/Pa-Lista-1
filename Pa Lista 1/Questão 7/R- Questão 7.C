#include <stdio.h>

int main (void){

int mat[4]={1,2,3,4},*p,x;
p= mat+1// Essa expressão vai ser valida, por resultar no endereço do segundo elemento do vetor mat.
p=mat++;//inválida.
p=++mat;//inválida.
x=(*mat)++;//válida pois tem-se como resultado o endereço da primeira posição do vetor mat.
}