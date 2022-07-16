#include <stdio.h>

int tamanho(){
    int tam;

    printf("Digite a quantidade de elementos que voce quer ter no vetor: ");
    scanf("%d", &tam);

    return tam;
}

float criavetor(float vetor[], int tam){
    int i;
    float vetorA[tam];

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d do vetor: ", i);
        scanf("%f", &vetor[i]);
    }

    return vetorA[tam];
}

void ordenavetor(float vetor[], int tam){
    int i, c;

    for (c = 0; c < tam - 1; c++) {

        for (i = 0; i < tam - 1; i++) {
            if (vetor[i] < vetor[i+1]) {
                float aux = vetor[i + 1];
                vetor[i+1] = vetor[i];
                vetor[i] = aux;
            }
        }
        
    }

}

int main(){
    int i, tam;

    tam = tamanho();

    float vetor[tam];

    vetor[tam] = criavetor(vetor, tam);

    ordenavetor(vetor, tam);
    
    printf("Os elementos do vetor, em ordem decrescente, sao ");

    for (i = 0; i < tam; i++) {
        printf("%f ", vetor[i]);
    }

    return 0;
}