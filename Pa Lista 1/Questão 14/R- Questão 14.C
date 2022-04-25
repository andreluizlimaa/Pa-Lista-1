
/* Impressão da primeira biblioteca, sendo a segunda responsável pela função qsort()*/
#include <stdio.h>
#include <stdlib.h>




/*Função utilizada para comparar se o número contido dentro da variavel v1, é maior que v2, caso seja será retornado um número maior que 1, se não irá ser retornado um valor menor que 0.*/
int Comparar_valores(const void *v1,const void *v2){

    return (*(int*)v1 -*(int*)v2);
}


int main(){
int n;
/*Irá receber o valor responsável pelo tamanho do vetor.*/
printf("Digite o tamanho do vetor para receber os dados: ");
scanf("%d",&n);
int vr[n];
/*irá receber os valores do vetor vr[]*/
printf("Digite os valores do vetor: ");
for(int i=0;i <n;i++){
    scanf("%d",&vr[i]);
}
/*função qsort, sendo o primeiro parametro o endereço do primeiro elemento do vetor vr[0],segundo parametro será o tamanho do vetor vr[n],o terceiro será responsável pelo tamanho em bytes de cada elemento do vetor,
o ultimo será um ponteiro apontando para função comparação, neste caso o Comparar_valores()*/
qsort(vr,n,sizeof(int),Comparar_valores);

/* for irá imprimir os valores ordenados de acordo com a função qsort(vr,n,sizeof(int),Comparar_valores) */
for(int j=0;j<n;j++){
    printf(" %d",vr[j]);
}

 return 0;
}