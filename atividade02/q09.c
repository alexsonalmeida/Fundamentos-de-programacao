#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num2 >= num3){
        printf("A ordem decrescente dos numeros e %d, %d, %d", num1, num2, num3);
    } else if(num1 > num2 && num1 >= num3 && num3 > num2 ){
        printf("A ordem decrescente dos numeros e %d, %d, %d", num1, num3, num2);
    } else if(num2 > num1 && num2 >= num3 && num1 >= num3){
        printf("A ordem decrescente dos numeros e %d, %d, %d", num2, num1, num3);
    } else if(num2 > num1 && num2 > num3 && num3 > num1){
        printf("A ordem decrescente dos numeros e %d, %d, %d", num2, num3, num1);
    } else if(num3 > num1 && num3 > num2 && num1 >= num2){
        printf("A ordem decrescente dos numeros e %d, %d, %d", num3, num1, num2);
    } else {
        printf("A ordem decrescente dos numeros e %d, %d, %d", num3, num2, num1);
    }
}