#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
    float peso;
} Dados;


int main(){
    Dados pessoa;
    
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa.nome);

    pessoa.idade = 35;
    pessoa.peso = 70.54;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa.nome);

    printf("\nimprimindo struct...\n");
    printf("----------------------------\n");

    printf("\t------Struct Dados-------\n");
    printf("\tO nome da pessoa e %s\n", pessoa.nome);
    printf("\tA idade da pessoa e %d\n", pessoa.idade);
    printf("\tO peso da pessoa e %f\n", pessoa.peso);
}