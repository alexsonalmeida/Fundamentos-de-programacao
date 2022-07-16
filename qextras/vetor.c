#include <stdio.h>

int main() {
    int i, tamanhovetor;

    printf("Digite a quantidade de valores que o vetor A guarda: ");
    scanf("%d", &tamanhovetor);

    int vetorA[tamanhovetor];

    for (i = 0; i < tamanhovetor; i++) {
        printf("Digite o elemento %d do vetorA: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("VetorA: %d", vetorA[i]);

    return 0;
}