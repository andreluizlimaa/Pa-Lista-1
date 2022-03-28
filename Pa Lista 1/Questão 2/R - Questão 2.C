#include <stdio.h>

int main(void)
{

 int i=5, *p;
 p= &i;
 printf("%x %d %d %d %d",p,*p+2,**&p,3**p,**&p+4);
 return 0;
 // será impresso primeramente o endereço de p.
 // sendo a expressão *p+2, sabendo que *p vale 5, temos 5+2=7.
 // **&p obtemos somente o valor 5.
 // 3**p, resulta em 3*5=15.
 // **&p+4, terá o resultado 5+4=9.

}                                                                           