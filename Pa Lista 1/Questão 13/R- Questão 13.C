#include <stdio.h>
#include <stdlib.h>

void ordem_cres(int n,float vr[]){
float g;
    for(int i=0;i <n-1;i++){
        for(int j=n-1;j>i;j--){

            if(vr[j-1]> vr[j]){
                g = vr[j-1];
                vr[j-1]= vr[j];
                vr[j] = g;
            }

        }
    }
}


int main(){
int n;

printf("Digite o tamanho do vetor para receber os dados: ");
scanf("%d",&n);
float *vr = (float*)malloc(n*sizeof(float));

printf("Digite os valores do vetor: ");
for(int i=0;i <n;i++){
    scanf("%f",&vr[i]);
}

ordem_cres(n,vr);

for(int j=0;j<n;j++){
    printf(" %f",vr[j]);
}
printf("\n");

free(vr);
    return 0;
}