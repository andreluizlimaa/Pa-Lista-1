#include <stdio.h>

 int i,j,*p,*q;
p = i; //é uma expressão ilegal, por p ser um ponteiro inteiro que guarda endereço, e i é uma variável inteira.
q = &j; // expressão legal.
p = &*&i; // expressão legal.
i = (*&)j; // expressão ilegal por conta do parenteses, que impede assim de haver interação de *& com o j para funcionar..
i = *&j; // expressão legal.
i = *&*&j; // expressão válida.
q = *p; // expressão ilegal, por conta do q está recebendo o valor que o ponteiro p indica, e não o endereço.
i = (*p)++ + *q;// expressão legal.





