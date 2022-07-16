#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura) ;

    printf("O seu IMC e de %f. ", imc);

    if(imc < 20){
        printf("O seu peso esta abaixo do ideal.");
    } else if(imc >= 20 && imc <= 25){
        printf("O seu peso esta dentro do ideal.");
    } else {
        printf("O seu peso esta acima do ideal.");
    }
}