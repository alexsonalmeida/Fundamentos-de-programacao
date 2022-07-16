#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media1, media2;

    printf("Digite a nota da primeira prova do primeiro aluno: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova do primeiro aluno: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova do primeiro aluno:");
    scanf("%f", &nota3);

    media1 = (nota1 + nota2 + nota3) / 3;

    printf("A media do primeiro aluno foi %f\n", media1);
    printf("-------------------Fim do espaco do primeiro aluno----------------------\n");

    printf("Digite a nota da primeira prova do segundo aluno: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova do segundo aluno: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova do segundo aluno: ");
    scanf("%f", &nota3);

    media2 = (nota1 + nota2 + nota3) / 3;
    
    printf("A media do segundo aluno foi %f\n", media2);
    printf("-------------------Fim do espaco do segundo aluno----------------------\n");

    if(media1 > media2){
        printf("O primeiro aluno teve melhor rendimento");
    } else if(media2 > media1){
        printf("O segundo aluno teve melhor rendimento");
    } else {
        printf("Os dois alunos tiveram rendimentos iguais");
    }
}