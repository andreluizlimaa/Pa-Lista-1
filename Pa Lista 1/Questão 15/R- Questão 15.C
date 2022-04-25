#include <stdio.h>
#include <stdlib.h>




int Comparar_valores(const void *v1,const void *v2){

    return (*(int*)v1 -*(int*)v2);
}

void my_qsort(int vr[],size_t numb,int (*Cv)(const void*,const void*)){
    int ax;
    printf("Comparar: ");
    for(int i=0;i < numb-1;i++){
        for(int j=0;j < numb-1;j--){
            if((*Cv)(vr[j-1] , vr[j]) == 1){
                ax = vr[j-1];
                vr[j-1]= vr[j];
                vr[j] = ax;
            }
            else if(Cv(vr[j-1],vr[j])==-1){
                 ax = vr[j];
                vr[j] = vr[j-1];
                 vr[j-1]= ax ;
            }

        }
    }

}

int main(){
int n;
printf("Digite o tamanho do vetor para receber os dados: ");

scanf("%d",&n);
int* vr = (int*)malloc(n*sizeof(int));

printf("Digite os valores do vetor: ");
for(int i=0;i <n;i++){
    scanf("%d",&vr[i]);
}
my_qsort(vr,n,Comparar_valores);

for(int j=0;j<n;j++){
    printf(" %d",vr[j]);
}

 return 0;
}