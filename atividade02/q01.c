#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O numero digitado e par!");
    } else {
        printf("O numero digitado e impar!");
    }
}