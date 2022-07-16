#include <stdio.h>

int main(){
    int x, pos, fibo, posant;

    pos = 0;
    posant = 0;
    fibo = 1;

    printf("Digite a posicao da sequencia que voce quer ver: ");
    scanf("%d", &x);

    while(pos < x){
        if(pos <= 1){
            fibo = 1;
        } else {
            posant = fibo - posant;
            fibo = fibo + posant;
        }            
        pos++;
    }
    
    printf("%d", fibo);
}