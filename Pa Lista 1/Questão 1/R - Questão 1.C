#include <stdio.h>

int main(void)
{
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    // Determinando o valor das seguintes expressões:
    printf("p == &i = %d;\n", p == &i);
    printf("*p - *q = %d;\n", p - *q);
    printf("*&p= %d;\n", *&p);
    printf("3 - *p / (*q) + 7= %d;", 3 - *p / (*q) + 7);
}                                                                           