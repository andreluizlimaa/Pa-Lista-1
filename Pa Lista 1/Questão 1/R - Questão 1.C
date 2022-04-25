#include <stdio.h>

int main(void)
{
    
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    // Determinando o valor das seguintes expressões:
    printf("p == &i = %d;\n", p == &i);// com isso podemos concluir que o resultado será 3.
    printf("*p - *q = %d;\n", *p - *q); // Nesse será impresso o valor de -2.
    printf("**&p= %d;\n", **&p); // Nesse caso será impresso o valor 3.
    printf("3 - *p / (*q) + 7= %d;", 3 - *p / (*q) + 7); // Nesse temos o valor de 10 após toda a expressão.


}                                                                           