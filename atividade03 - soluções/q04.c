#include <stdio.h>

int main(){
    int num, quant, soma, resto3, resto7;

    resto3 = 0;
    resto7 = 0;
    quant = 0;
    soma = 0;

    for(num = 1; quant < 200; num++){
        resto3 = num % 3;
        resto7 = num % 7;

        if(resto3 == 0 && resto7 != 0){
            soma += num;
            quant++;
        }
    }
    printf("%d", soma);
}