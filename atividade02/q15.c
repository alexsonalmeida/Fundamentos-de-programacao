#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 10 ){
        printf("Voce foi classificado como 'criança'");
    } else if(idade >= 10 && idade < 20){
        printf("Voce foi classificado como 'adolescente'");
    } else if(idade >= 20 && idade < 30){
        printf("Voce foi classificado como 'jovem'");
    } else if(idade >= 30 && idade < 40){
        printf("Voce foi classificado como 'adulto'");
    } else if(idade >= 40 && idade < 50){
        printf("Sua idade foi classificada como 'melhor idade'");
    } else {
        printf("Voce foi classificado como 'aposentado'");
    }
}