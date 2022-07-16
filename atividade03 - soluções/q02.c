#include <stdio.h>

int main(){
    int a, b, res, c;

    printf("Digite a base: ");
    scanf("%d", &a);

    while(a < 0){
        printf("Base invalida, tente novamente: ");
        scanf("%d", &a);
    }

    printf("Digite o expoente: ");
    scanf("%d", &b);

    while(b < 0){
        printf("Expoente invalido, tente novamente: ");
        scanf("%d", &b);
    }

    if(b == 0){
        res = 1;
    } else {
        res = a;

        for(c = 1; c < b; c++){
            res = res * a;
        }
    }
    
    printf("O resultado da expressao e %d ", res);

}