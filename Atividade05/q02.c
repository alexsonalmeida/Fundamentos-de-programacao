#include <stdio.h>

int numHab(){
    int n;

    printf("Digite a quantidade de habitantes da regiao: ");
    scanf("%d", &n);

    return n;
}

int inicializavetoridade(i){
    int n;

    printf("Digite a idade do habitante %d: ", i);
    scanf("%d", &n);

    return n;
}

int inicializavetorsexo(i){
    int n;

    printf("Digite o sexo do habitante %d: ", i);
    scanf("%d", &n);

    return n;
}

int inicializavetorfilho(i){
    int nfilhos;

    printf("Digite o numero de filhos do habitante numero %d: ", i);
    scanf("%d", &nfilhos);

    return nfilhos;  
}

float inicializavetorsalario(i){
    float salHab;

    printf("Digite o salario do habitante numero %d: ", i);
    scanf("%f", &salHab); 

    return salHab;
}

float mediaIdade(int idade[], int x){
    int i, somaIdade;
    float med;
    somaIdade = 0;
    med = 0;

    for (i = 0; i < x; i++) {
        somaIdade += idade[i];
    }

    med = somaIdade / x;

    return med;
}

int menorId(int idade[], int x){
    int i, id;
    i = 0;
    id = idade[i];

    for (i = 0; i < x; i++) {
        if (idade[i] < id) {
            id = idade[i];
        }
    }

    return id;
}

int maiorId(int idade[], int x){
    int i, id;
    i = 0;
    id = idade[i];

    for (i = 0; i < x; i++) {
        if (idade[i] > id) {
            id = idade[i];
        }
    }

    return id;
}

int contaMulheres(float salario[], int numFilhos[], int sexo[], int x){
    int i, nMulheres;
    nMulheres = 0;

    for (i = 0; i < x; i++) {
        if (salario[i] < 500.00 && numFilhos[i] == 3 && sexo[i] == 2) {
            nMulheres++;
        }
    }

    return nMulheres;
}

int main(){
    int x, i;
    x = numHab();
    float medIdade;
    int menorIdade;
    int maiorIdade;
    int qntmulheres;

    int idade[x];
    printf("Recebendo os dados das idades dos habitantes...\n");

    for (i = 0; i < x; i++) {
        idade[i] = inicializavetoridade(i);
    }

    int sexo[x];
    printf("Recebendo os dados dos sexos dos habitantes(digite 1 para masculino ou 2 para feminino )...\n");

    for (i = 0; i < x; i++) {
        sexo[i] = inicializavetorsexo(i);
    }

    int numFilhos[x];
    printf("Recebendo os dados dos numeros de filhos dos habitantes...\n");

    for (i = 0; i < x; i++) {
        numFilhos[i] = inicializavetorfilho(i);
    }

    float salario[x];
    printf("Recebendo os dados dos salarios dos habitantes...\n");

    for (i = 0; i < x; i++) {
        salario[i] = inicializavetorsalario(i);
    }

    medIdade = mediaIdade(idade, x);
    menorIdade = menorId(idade, x);
    maiorIdade = maiorId(idade, x);
    qntmulheres = contaMulheres(salario, numFilhos, sexo, x);

    printf("\n");
    printf("A media de idade das pessoas da regiao e %f\n", medIdade);
    printf("A menor idade encontrada na regiao foi %d, enquanto a maior idade foi %d\n", menorIdade, maiorIdade);
    printf("A quantidade de mulheres com salario ate R$500.00 e com 3 filhos foi igual a %d", qntmulheres);

    return 0;
}