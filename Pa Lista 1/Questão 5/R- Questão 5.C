#include <stdio.h>

int main(void){
  
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i); // Vai ser mostrado o valor do inteiro i.
  printf("vet[%d] = %.1f",i, vet[i]);// Vai ser impresso o valor de i armazenado no vetor como float.
  printf("*(f + %d) = %.1f",i, *(f+i));//Valores de i, e os valores guardados no vetor acessados pelo ponteiro f.
  printf("&vet[%d] = %X",i, &vet[i]);//Valores de i,e os endereços das posições do vetor.
  printf("(f + %d) = %X",i, f+i);//Valores de i, e os endereços das posições do vetor.
  }
}
