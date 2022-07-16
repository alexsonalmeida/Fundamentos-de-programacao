#include <stdio.h>

int main(){
    int num, valor, res;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    for(num = 1; num < valor; num++){
        res = valor / num;

        if(res == num){
            break;
        }
    }

    if(num < valor){
        printf("O numero e um quadrado perfeito");
    } else {
        printf("O numero nao e um quadrado perfeito");
    }
}