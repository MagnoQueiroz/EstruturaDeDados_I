#include <stdio.h>
#include <stdlib.h>


void veriPar(int *vetorPar, int tamanho){
    for (int index = 0; index < tamanho; index++) {
        if (vetorPar[index] % 2 == 0) {
            printf("%d\n", vetorPar[index]);
        }
    }
}

int main(void) {
    int tamanho = 0;
    int *vetorPar = (int *)malloc(tamanho * sizeof(int));

    printf("digite o tamanho do vetor ");
    scanf("%d", &tamanho);

    for (int index = 0; index < tamanho; index++) {
        printf("digite um numero: ");
        scanf("%d", &vetorPar[index]);
    }

    // pq aqui n passo endereço?? ou n passo o ponteiro??
    veriPar(vetorPar, tamanho);
    return 0;
}