#include <stdio.h>

int main(){
    int num, fat, c;

    printf("Digite o numero: ");
    scanf("%d", &num);

    while(num < 0){
        printf("Numero invalido, tente novamente: ");
        scanf("%d", &num);
    }

    if(num == 0){
        printf("O fatorial do numero e 1");
    } else {
        fat = num;

        for (c = 0; c < num ; c++){
            num--;
            fat = fat * num;
        }

        printf("O fatorial do numero e: %d", fat);
    }

}