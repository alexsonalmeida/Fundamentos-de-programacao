#include <stdio.h>

int main(){
    int hrstrab, dpfunc, hrsxtrab;
    float salamin, valhrstrab, valhrsxtrab, salmes, salbruto, salliquido, salreceber;

    printf("Digite o salario minimo atual: ");
    scanf("%f", &salamin);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &hrstrab);

    printf("Digite a quantidade de dependentes do funcionario: ");
    scanf("%d", &dpfunc);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%d", &hrsxtrab);

    valhrstrab = salamin / 2;
    salmes = hrstrab * valhrstrab;
    valhrsxtrab = hrsxtrab * (valhrstrab + valhrstrab / 2);

    salbruto = salmes + (dpfunc * 32) + valhrsxtrab;

    if(salbruto < 200){
        salliquido = salbruto;
    } else if(salbruto >= 200 && salbruto <= 500){
        salliquido = salbruto - (salbruto / 10);
    } else {
        salliquido = salbruto - (salbruto / 5);
    }

    if(salliquido <= 350){
        salreceber = salliquido + 100;
    } else {
        salreceber = salliquido + 50;
    }

    printf("O salario a receber do funcionario e R$%f", salreceber);
}