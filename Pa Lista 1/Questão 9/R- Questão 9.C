#include <stdio.h>

int main(){
  char x[4];
  x[0] = 4092;
printf("x+1 = %d\n",x+1);//4093
printf("x+2 = %d\n",x+2);//4094
printf("x+3 = %d",x+3);//4095
}

int main(){
  
  int x[4];
  x[0] = 4092;
printf("x+1 = %d\n",x+1);//4094
printf("x+2 = %d\n",x+2);//4096
printf("x+3 = %d",x+3);//4098
}

int main(){
  float x[4];
  x[0] = 4092;
printf("x+1 = %d\n",x+1);//4096
printf("x+2 = %d\n",x+2);//4100
printf("x+3 = %d",x+3);//4104
}

int main(){
  double x[4];
  x[0] = 4092;
printf("x+1 = %d\n",x+1);//4100
printf("x+2 = %d\n",x+2);//4108
printf("x+3 = %d",x+3);//4116
return 0;
}