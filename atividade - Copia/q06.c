#include <stdio.h>

int main(){
    int num, sucess, antecess;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    antecess = num - 1;
    sucess = num + 1;
    
    printf("O antecessor e o sucessor do numero que voce digitou sao, respectivamente, %d e %d", antecess, sucess);
}