#include <stdio.h>

int main(){
  char x[4];
  x[0] = 4092;
printf("x+1 = %d\n",x+1);// somou mais 1 = (1*1)
printf("x+2 = %d\n",x+2);// somou mais 2 = (2*1)
printf("x+3 = %d",x+3);//   somou mais 3 = (3*1)

  int x[4];
printf("x+1 = %d\n",x+1);// somou mais 4 = (1*4)
printf("x+2 = %d\n",x+2);// somou mais 8 = (2*4)
printf("x+3 = %d",x+3);//   somou mais 12 = (3*4)

  float x[4];
printf("x+1 = %d\n",x+1);// somou mais 4 = (1*4)
printf("x+2 = %d\n",x+2);// somou mais 8 = (2*4)
printf("x+3 = %d",x+3);//   somou mais 12 = (3*4)

  double x[4];
printf("x+1 = %d\n",x+1);// somou mais 8 = (1*8)
printf("x+2 = %d\n",x+2);// somou mais 16 = (2*8)
printf("x+3 = %d",x+3);//   somou mais 24 = (3*8)
return 0;
}

//Comparando com o que foi realizado aqui, com a questão 9, nota-se a diferença de valores
// antes o char era 1 byte, int 2 byte, flot 4 byte, e double 8 byte, porém agora houve mudança no  int de 2 byte para 4 byte.