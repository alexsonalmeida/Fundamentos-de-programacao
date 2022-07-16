#include <stdio.h>

int main(){
    float num, res;

    printf("Digite um valor: ");
    scanf("%f", &num);
    
    res = num/4;

    printf("Um quarto do valor corresponde a %f", res);
}