#include <stdio.h>

int main(){
    float c, somanota, nota, menornota, maiornota, media;

    somanota = 0;

    printf("Digite, respectivamente, a nota dos juizes: \n");

    for(c = 0; c < 10; c++){
        scanf("%f", &nota);

        somanota = somanota + nota;

        maiornota = nota;
        menornota = nota;

        if(nota > maiornota){
            maiornota = nota;
        } else if(nota < menornota){
            menornota = nota;
        }
    }

    media = (somanota - maiornota - menornota) / 8;

    printf("A media do esportista foi: %f", media);
    
}