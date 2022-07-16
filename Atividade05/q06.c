#include <stdio.h>

int tamanho(){
    int t;

    printf("Digite a quantidade de elementos que voce quer no vetor: ");
    scanf("%d", &t);

    return t;
}

int criavetor(int vetor[], int tam){
    int i, vetorA[tam];

    for (i = 0; i < tam; i++) {
        printf("Digite o elemento %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    return vetorA[tam];
}

int verificaprimo(int n){
    int i, divs;
    divs = 2;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            divs++;
        }
    }

    if (n == 1) {
        return 0;
    } else if (n == 0) {
        return 0;
    } else if (divs != 2) {
        return 0;
    } else {
        return 1;
    }
    
}

int contadorprimos(int vetor1[], int tam){
    int i, r, nprimos;
    nprimos = 0;

    for (i = 0; i < tam; i++) {
        r = verificaprimo(vetor1[i]);

        if (r == 1) {
            nprimos++;
        }
    }

    return nprimos;
}

int main(){
    int tam, qntprimos;
    qntprimos = 0;

    tam = tamanho();

    int vetor[tam];

    vetor[tam] = criavetor(vetor, tam);
    
    qntprimos = contadorprimos(vetor, tam);

    printf("A quantidade de numeros primos encontrada no vetor foi: %d ", qntprimos);

    return 0;
}