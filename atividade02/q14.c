#include <stdio.h>

int main(){
    int i;
    float a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    printf("Digite o comando desejado (1, 2 ou 3): ");
    scanf("%d", &i);

    if(i == 1){
        if (a < b && b < c){
            printf("A ordem crescente dos numeros e %f, %f, %f", a, b, c);
        } else if(a < b && a < c && c < b ){
            printf("A ordem crescente dos numeros e %f, %f, %f", a, c, b);
        } else if(b < a && b < c && a < c){
            printf("A ordem crescente dos numeros e %f, %f, %f", b, a, c);
        } else if(b < a && b < c && c < a){
            printf("A ordem crescente dos numeros e %f, %f, %f", b, c, a);
        } else if(c < a && c < b && a < b){
            printf("A ordem crescente dos numeros e %f, %f, %f", c, a, b);
        } else {
            printf("A ordem crescente dos numeros e %f, %f, %f", c, b, a);
        }
    } else if(i == 2){
        if (a > b && b > c){
            printf("A ordem decrescente dos numeros e %f, %f, %f", a, b, c);
        } else if(a > b && a > c && c > b ){
            printf("A ordem decrescente dos numeros e %f, %f, %f", a, c, b);
        } else if(b > a && b > c && a > c){
            printf("A ordem decrescente dos numeros e %f, %f, %f", b, a, c);
        } else if(b > a && b > c && c > a){
            printf("A ordem decrescente dos numeros e %f, %f, %f", b, c, a);
        } else if(c > a && c > b && a > b){
            printf("A ordem decrescente dos numeros e %f, %f, %f", c, a, b);
        } else {
            printf("A ordem decrescente dos numeros e %f, %f, %f", c, b, a);
        }
    } else {
        if (a > b && a > c){
            printf("A ordem dos numeros e %f, %f, %f", b, a, c);
        } else if( b > a && b > c){
            printf("A ordem dos numeros e %f, %f, %f", a, b, c);
        } else {
            printf("A ordem dos numeros e %f, %f, %f", a, c, b);
        }
    }
}