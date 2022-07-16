#include <stdio.h>

int main(){
    float nota1, nota2, mediap, mediaa, aulast, aulasa;
    //mediaa = media de aulas; mediap = media de provas; aulast = total de aulas; aulasa = aulas assistidas
    printf("Digite o total de aulas ministradas: ");
    scanf("%d", &aulast);

    printf("Digite o total de aulas assistidas: ");
    scanf("%d", &aulasa);

    mediaa = (aulasa / aulast) * 100;

    printf("A frequencia do aluno e de %f%%.\n", mediaa);

    if(mediaa < 75){
        printf("ALUNO REPROVADO POR FREQUENCIA! \n");
    }
     
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    mediap = (nota1 + nota2) / 2;
    
    if(mediap >= 7){
        printf("APROVADO NA MEDIA!");
    } else if(mediap < 4 ){
        printf("REPROVADO!");
    } else {
        float af;

        printf("Digite a nota da prova final do aluno: ");
        scanf("%f", &af);

        mediap = (mediap + af) / 2;

        if(mediap < 5){
            printf("REPROVADO!");
        } else {
            printf("APROVADO POR NOTA COM CONCEITO B!");
        }
    }
}