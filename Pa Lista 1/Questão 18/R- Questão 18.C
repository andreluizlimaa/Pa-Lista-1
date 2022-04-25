#include <stdio.h>
#include <stdlib.h>


void mult_m(int** A,int** B,int** C,int nl,int ncA,int ncB){
    int ct;
    for(int i=0; i < nl;i++){
        for(int j=0;j< ncB;j++){
            ct = 0;
            for(int k=0;k< ncA;k++){
                ct = ct+A[i][k]*B[k][j];
                }
                C[i][j] = ct; 
            }
        }
    }




int main(){


    int **A, **B, **C;
    int nl = 2, ncA=2, ncB=2;

    A = (int**) malloc(nl*sizeof(int*));
    B = (int**) malloc(nl*sizeof(int*));
    C = (int**) malloc(nl*sizeof(int*));
    for(int i=0;i<nl;i++){
        A[i] = malloc(ncA*nl*sizeof(int));
        B[i] = malloc(ncB*nl*sizeof(int));
        C[i] = malloc(ncB*nl*sizeof(int));  
    }

    A[0][0] = 2; A[0][1] = 3; A[1][0] = 4; A[1][1] = 5;
    B[0][0] = 9; B[0][1] = 8; B[1][0] = 7; B[1][1] = 6;

    mult_m(A,B,C,nl,ncA,ncB);

    for(int i=0; i < nl;i++){
        for(int j=0;j< ncB;j++){
            printf(" %2d",C[i][j]);
        }
        printf(" \n");
    }
    
    free(A[0]);
    free(B[0]);
    free(A);
    free(B);

    return 0;
}