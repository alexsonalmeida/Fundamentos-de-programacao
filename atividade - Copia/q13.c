#include <stdio.h>

int main(){
    float saldo_ant, saldo_nov;

    printf("Digite o valor disponivel na conta: ");
    scanf("%f", &saldo_ant);

    saldo_nov = saldo_ant + saldo_ant * 2/100;
    
    printf("O novo saldo disponivel e %f", saldo_nov);
}