/*Professor, não consegui fazer essa, mas deixei o código que tentei executar para não deixar em branco */


#include <stdio.h>

int main(){
    int n, div, qntprimos, num, valor, resto;

    printf("Quantos numeros primos voce deseja exibir? ");
    scanf("%d", &n);

    qntprimos = 0;
    valor = 0;

    while(qntprimos < n){

        for(num = 1; num < valor; num++){
            div = 0;
            valor = valor + 1;

            resto = valor % num;

            if(resto == 0){
                div++;
            }

            if(div == 2){
                qntprimos++;
                printf("%d\n", valor);
            }
        }

    }

}