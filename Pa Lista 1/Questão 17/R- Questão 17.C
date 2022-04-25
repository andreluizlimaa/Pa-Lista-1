#include <stdio.h>


void sum_v(int v1[],int v2[],int v3[],int tv){
    
    for(int i=0; i< tv;i++){
        v3[i]= v1[i]+v2[i];
    }
}




int main(){
    int tv;
    printf("Digite o tamanho do vetor desejado: \n ");
    scanf("%d",&tv);

    int v1[tv],v2[tv],v3[tv];

    printf("Digite os elementos do Vetor 1: \n");
    for(int i =0; i < tv;i++){
        scanf("%d",&v1[i]);
    }
    printf("Digite os elementos do Vetor 2: \n");
    for(int j =0; j < tv;j++){
        scanf("%d",&v2[j]);
    }
    printf("Digite os elementos do Vetor 3: \n");
    for(int k =0; k < tv;k++){
        scanf("%d",&v3[k]);
    }
    sum_v(v1,v2,v3,tv);

    printf("Elementos do vetor resultante: \n");

    for(int i=0;i< tv;i++){
        printf(" %d", v3[i]);
    }
    return 0;
}