#include <stdio.h>

int main(){
    float ntprojeto, medtrabalhos, ntteste, ntexfin, notafinal;

    printf("Digite a nota do projeto: ");
    scanf("%f", &ntprojeto);

    printf("Digite a media dos trabalhos: ");
    scanf("%f", &medtrabalhos);

    printf("Digite a nota do teste: ");
    scanf("%f", &ntteste);

    printf("Digite a nota do exame final: ");
    scanf("%f", &ntexfin);

    notafinal = ((ntprojeto * 2.5) + medtrabalhos + (ntteste *  2) + (ntexfin * 4.5)) / 10;
    
    if(ntexfin <= 7.5){
        printf("Aluno reprovado");
    } else if(ntprojeto <= 9.5){
        printf("Aluno reprovado");
    } else if(notafinal <= 8){
        printf("Aluno reprovado");
    } else {
        printf("Aluno aprovado");
    }
}