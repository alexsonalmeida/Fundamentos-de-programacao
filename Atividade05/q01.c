#include <stdio.h>
void inicializavetoridade(int idade[], int tam){
    int i;

    printf("Recebendo os dados das idades dos habitantes...\n");
    for (i = 0; i < tam ; i++) {
        printf("Digite a idade do habitante numero %d : ", i);
        scanf("%d", &idade[i]);
    }

}

void inicializavetorcolhos(int cor_olho[], int tam){
    int i;

    printf("Recebendo os dados da cor dos olhos dos habitantes(Digite 1 para azul; 2 para verde; 3 para castanho)...\n");
    for (i = 0; i < tam ; i++) {
        printf("Digite a cor dos olhos do habitante numero %d : ", i);
        scanf("%d", &cor_olho[i]);
    }
}

void inicializavetorccabelos(int cabelo[], int tam){
    int i;

    printf("Recebendo os dados da cor dos cabelos dos habitantes(Digite 1 para louro; 2 para preto; 3 para castanho)...\n");
    for (i = 0; i < tam ; i++) {
        printf("Digite a cor dos cabelos do habitante numero %d : ", i);
        scanf("%d", &cabelo[i]);
    }
}

void inicializavetorsexo(int sexo[], int tam){
    int i;

    printf("Recebendo os dados dos sexos dos habitantes(Digite 1 para masculino ou 2 para feminino)...\n");
    for (i = 0; i < tam ; i++) {
        printf("Digite o sexo do habitante numero %d : ", i);
        scanf("%d", &sexo[i]);
    }    
}

float calculamedia(int idade[], int cabelo[], int tam){
    int somaidade = 0, qntpessoas = 0, i;
    float mediaidade;

    for (i = 0; i < tam; i++) {
        if (cabelo[i] == 1 ) {
            somaidade += idade[i];
            qntpessoas++;
        }
    }

    mediaidade = somaidade / qntpessoas;

    return mediaidade;
}

int contahomens(int idade[], int sexo[], int tam){
    int i, total = 0;

    for (i = 0; i < tam; i++) {
        if (sexo[i] == 1 && idade[i] > 30) {
            total++;
        }
    }

    return total;
}

int contamulheres(int cabelo[], int sexo[], int tam){
    int i, totalcasos = 0;

    for (i = 0; i < tam; i++) {
        if (cabelo[i] == 2 && sexo[i] == 2) {
            totalcasos++;
        }
    }

    return totalcasos;
}

int main(){
    int tam = 10;
    float medidade;
    int qnthomensmais30, qntmulherescp;
    int idade[tam];
    int cor_olho[tam];
    int cabelo[tam];
    int sexo[tam];

    inicializavetoridade(idade, tam);
    inicializavetorcolhos(cor_olho, tam);
    inicializavetorccabelos(cabelo, tam);
    inicializavetorsexo(sexo, tam);
    
    medidade = calculamedia(idade, cabelo, tam);
    qnthomensmais30 = contahomens(idade, sexo, tam);
    qntmulherescp = contamulheres(cabelo, sexo, tam);

    printf("A media da idade de pessoas com cabelo loiro e %f\n", medidade);
    printf("A quantidade de homens com mais de 30 anos e %d\n", qnthomensmais30);
    printf("A quantidade de mulheres com cabelo preto e %d\n", qntmulherescp);

    return 0;
}