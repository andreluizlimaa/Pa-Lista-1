#include <stdio.h>

 int i,j,*p,*q;
p = i; //é uma expressão ilegal, por p ser um ponteiro inteiro que guarda endereço, e i é uma variável inteira.
q = &j; // expressão válida.
p = &*&i; // expressão válida.
i = (*&)j; // expressão errada por conta do parenteses, que impede assim de haver interação de *& com o j para funcionar..
i = *&j; // expressão válida.
i = *&*&j; // expressão válida.
q = *p; // expressão inválida, por conta do q está recebendo o valor que o ponteiro p indica, e não o endereço.
i = (*p)++ + *q;// expressão válida.





