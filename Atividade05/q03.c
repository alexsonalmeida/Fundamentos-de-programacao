#include <stdio.h>

/*Professor, nessa questão a função retorna o valor certo em algumas situações, mas fiz outros testes e ela não retornou o vetor correto. Não consegui entender direito o erro e consertá-lo a tempo, então mandei assim mesmo.*/

int tamanhoX(){
    int tam;

    printf("Digite a quantidade de elementos que voce quer ter no vetorX: ");
    scanf("%d", &tam);

    return tam;
}

int tamanhoY(){
    int tam;

    printf("Digite a quantidade de elementos que voce quer ter no vetorY: ");
    scanf("%d", &tam);

    return tam;
}

void incializavetor(int vetor[], int tam){
    int i;

    printf("Inicializando vetor...\n");
    for (i = 0; i < tam ; i++) {
        printf("Digite o elemento %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
}

int tamMax(int vetorX[], int tamX, int vetorY[], int tamY){
    int i, k;
    int tamMax = tamX + tamY;
    int tamMen;
    int tamMaior;

    if (tamX < tamY) {
        tamMen = tamX;
        tamMaior = tamY;
    } else {
        tamMen = tamY;
        tamMaior = tamX;
    }

    int vetorMenor[tamMen];
    int vetorMaior[tamMaior];

    if (tamX < tamY) {
        vetorMenor[tamMen] = vetorX[tamX];
        vetorMaior[tamMaior] = vetorY[tamY];
    } else {
        vetorMenor[tamMen] = vetorY[tamX];
        vetorMaior[tamMaior] = vetorX[tamY];
    }

    for (i = 0; i < tamMen; i++ ) {

        for (k = 0; k < tamMaior; k++ ) {
            if (vetorMenor[i] == vetorMaior[k]) {
                tamMax--;
            }
        }

    }

    return tamMax;
}

void uniao(int vetorX[], int tamX, int vetorY[], int tamY, int vetorU[], int tamU){
    int i, k, j, tam2laco;
    tam2laco = tamU - tamX;

    for (i = 0; i < tamX; i++) {
        vetorU[i] = vetorX[i];
    }

    for (i = 0; i < tam2laco; i++) {

        for (j = 0; j < tamY; j++ ) {

            for (k = 0; k < tamX; k++ ) {

                if (vetorY[j] != vetorX[k]) {
                    vetorU[tamX+i] = vetorY[j];
                }

            }

        }

    }
}

int main(){
    int i, tamX, tamY;
    tamX = tamanhoX();
    tamY = tamanhoY();

    int vetorX[tamX];
    int vetorY[tamY];

    incializavetor(vetorX, tamX);
    incializavetor(vetorY, tamY);

    int tamU = tamMax(vetorX, tamX, vetorY, tamY);
    int vetorU[tamU];

    uniao(vetorX, tamX, vetorY, tamY, vetorU, tamU);

    printf("Imprimindo o vetor uniao...\n");

    for (i = 0; i < tamU; i++) {
        printf("%d ", vetorU[i]);
    }

    return 0;
}