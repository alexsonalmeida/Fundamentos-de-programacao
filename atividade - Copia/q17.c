#include <stdio.h>

int main(){
    float c, f;
    
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &c);

    f = (9*c+160)/5;
    
    printf("A temperatura em fahrenheit e: %f", f);
}