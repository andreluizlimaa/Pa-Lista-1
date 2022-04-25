#include <stdio.h>

int main() {
  
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("A= %d \n", valor);// Será impresso o valor 20.
  /* (b) */
  temp = 26.5
;
  p2 = &temp;
  *p2 = 29.0
;
  printf("B = %.1f \n", temp); // Será impresso o valor 29.0.
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("C =%c \n", aux);// Será impresso o caractere P da String nome.
  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("D =%c \n", aux);// Será impresso o caractere E da String nome.
  /* (e) */
  p3 = nome;
  printf("E =%c \n", *p3); // Será impresso o caractere P da String nome.
  /* (f) */
  p3 = p3 +
4
;
  printf("F= %c \n", *p3);// Será impresso o caractere E da String nome.
  /* (g) */
  p3--;
  printf("G= %c \n", *p3); // Será impresso o caractere T da String nome.
/* (h) */
  vetor[0] = 31 
;
  vetor[1] = 45 
;
  vetor[2] = 27
;
  p4 = vetor;
  idade = *p4;
  printf("H= %d \n", idade); // Será impresso o valor 31.
  /* (i) */
  p5 = p4 +
1
;
  idade = *p5;
  printf("I= %d \n", idade); // Será impresso o valor 45.
  /* (j) */
  p4 = p5 +
1
;
  idade = *p4;
  printf("J= %d \n", idade); // Será impresso o valor 27.
  /* (l) */
  p4 = p4 -
2
;
  idade = *p4;
  printf("L= %d \n", idade); // Será impresso o valor 31.
/* (m) */
  p5 = &vetor[2] - 1;
  printf("M= %d \n", *p5); // Será impresso o valor 45.
  /* (n) */
  p5++;
  printf("N=%d \n", *p5); // Será impresso o valor 27.
  
  return(0);
}
