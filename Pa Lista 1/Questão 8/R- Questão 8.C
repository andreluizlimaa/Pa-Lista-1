#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));//imprime os valores do vetor vet{4,9,13}.
  }
}

int main(){
  
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);//imprime os endereços das posições do vetor vet
  }
}
