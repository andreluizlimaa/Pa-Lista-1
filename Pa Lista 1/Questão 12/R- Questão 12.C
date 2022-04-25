#include <stdio.h>

/*12- O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso. */

/*R- O ponteiro para a função tem o mesmo principio que o ponteiro para inteiros,em outras palavras referenciar um endereço neste caso da função.*/

/* Exemplo da utilização do ponteiro para função*/

void func(int a){
    printf("Valor do a: %d ",a );
    
}


int main(){
    void (*func_pont)(int) = &func;

    func_pont(30);

    return 0;

}
