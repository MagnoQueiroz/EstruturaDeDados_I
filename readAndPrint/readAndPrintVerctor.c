#include <stdio.h>
#include <stdlib.h>

#define  TAMANHO  5

void preencheIndex(float *vetor, int tamanho) {
    for (int index = 0; index < tamanho; index++){
        printf("Digite os números: " );
        scanf("%f", &vetor[index]);
    }

}
void imprimirVetor(float *vetor, int tamanho) {
    for(int index = 0; index < tamanho; index++){
        printf("%.2f\n", vetor[index]);
    }
}
float * tamanhoVetor() {
      float *vetor = (float *)malloc(TAMANHO * sizeof(float));
    if(vetor == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    return vetor;
}

float * editTamanho(float * vetor) {
    int novotamanho= 0;

    printf("digite um novo tamanho para o vetor: ");
    scanf("%d", &novotamanho);

    vetor = (float *)realloc(vetor, novotamanho * sizeof(float));
    if(vetor == NULL) {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    return vetor;
}
int main() {
    float* tamanho_vetor = tamanhoVetor();

    preencheIndex(tamanho_vetor, TAMANHO);
    imprimirVetor(tamanho_vetor, TAMANHO);

    tamanho_vetor = editTamanho(tamanho_vetor);

    return 0;
}
