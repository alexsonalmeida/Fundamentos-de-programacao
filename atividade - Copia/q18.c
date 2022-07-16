#include <stdio.h>

int main(){
    float d, t, v, l;
    
    printf("Digite o tempo da viagem: ");
    scanf("%f", &t);
    
    printf("Digite a velocidade media da viagem: ");
    scanf("%f", &v);
    
    d = t * v;
    l = d / 12;
    printf("A distancia percorrida na viagem foi de %f e a quantidade de litros consumida foi %f", d, l);
}