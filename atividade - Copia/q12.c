#include <stdio.h>

int main(){
    float num, quad;

    printf("Digite um valor: ");
    scanf("%f", &num);

    quad = num * num;
    
    printf("O valor ao quadrado e %f", quad);
}