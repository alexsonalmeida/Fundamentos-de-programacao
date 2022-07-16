#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2;
    float r, d;

    printf("Digite a coordenada x do primeiro ponto: ");
    scanf("%d", &x1);

    printf("Digite a coordenada y do primeiro ponto: ");
    scanf("%d", &y1);

    printf("Digite a coordenada x do segundo ponto: ");
    scanf("%d", &x2);

    printf("Digite a coordenada y do segundo ponto: ");
    scanf("%d", &y2);

    printf("Digite o raio das circunferencias: ");
    scanf("%f", &r);

    d  = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    if(d <= r * 2){
        printf("As circunferencias se chocaram!");
    } else {
        printf("As circunferencias nao se chocaram!");
    }

}