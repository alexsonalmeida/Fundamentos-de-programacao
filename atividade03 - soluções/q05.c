#include <stdio.h>

int main(){
    int num, c, div;

    printf("Digite um numero: ");
    scanf("%d", &num);

    div = 0;

    for(c = 1; c <= num; c++){
        if(num % c == 0){
            div++;
        }
    }

    if(num <= 0){
        printf("O numero digitado nao e primo");
    } else if(num == 1){
        printf("O numero digitado nao e primo");
    } else if(div > 2){
        printf("O numero digitado nao e primo");
    } else {
        printf("O numero digitado e primo");
    }
}