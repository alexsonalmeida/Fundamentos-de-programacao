#include <stdio.h>

int verificarpar(int vetor[], int tam){
    int i, qpares;
    qpares = 0;

    for (i = 0; i < tam; i++) {
        if (vetor[i] % 2 == 0) {
            qpares++;
        }
    }

    return qpares;
}

int tamanho(){
    int tam;
    printf("Digite a quantidade de elementos que voce quer ter no vetor: ");
    scanf("%d", &tam);

    return tam;
}

int incializavetor(int vetor[], int tam){
    int i, vetorA[tam];

    printf("Inicializando vetor...\n");
    for (i = 0; i < tam ; i++) {
        printf("Digite o elemento %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    return vetorA[tam];
}

int main(){
    int tamV, qntpares;
    tamV = tamanho();

    int vetorA[tamV];

    vetorA[tamV] = incializavetor(vetorA, tamV);

    qntpares = verificarpar(vetorA, tamV);

    printf("Foram encontrados %d elementos pares no vetor", qntpares);

    return 0;
}