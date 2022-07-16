#include <stdio.h>
#include <string.h>

typedef struct {
    int identificador;
    char nome[50];
    float altura;
    int idade;
    float peso;
} Paciente;

int definir_tamanho_lista(){
    int res;
    
    printf("Digite o tamanho da lista de pacientes: ");
    scanf("%d", &res);

    return res;
}

void menu(){
    printf("\n Sistema de prontuario medico \n");
    printf("\t [1] - Inicializar lista de pacientes \n");
    printf("\t [2] - Inserir um paciente \n");
    printf("\t [3] - Imprimir a lista de pacientes \n");
    printf("\t [4] - Editar um paciente pelo nome \n");
    printf("\t [5] - Apagar um paciente \n");
    printf("\t [6] - Verificar a media de idade dos pacientes \n");
    printf("\t [7] - Verificar os dados do paciente mais pesado \n");
    printf("\t [0] para sair \n");
    printf("Digite a opcao para a acao que deseja fazer: ");
}

void imprimir_paciente(Paciente x){
    printf("----- Dados do Paciente ---- \n");
    printf("\t Identificador: %d \n", x.identificador);
    printf("\t Nome: %s \n", x.nome);
    printf("\t Altura: %f \n", x.altura);
    printf("\t Idade: %d \n", x.idade);
    printf("\t Peso: %f \n", x.peso);
    printf("--------------------------------\n");
}

Paciente ler_paciente(){
    Paciente paciente_pronto;
    
    printf("Digite o nome do paciente: ");
    scanf("%s", paciente_pronto.nome);
    
    printf("Digite o identificador do paciente: ");
    scanf("%d", &paciente_pronto.identificador);
    
    printf("Digite a altura do paciente: ");
    scanf("%f", &paciente_pronto.altura);
    
    printf("Digite a idade do paciente: ");
    scanf("%d", &paciente_pronto.idade);

    printf("Digite o peso do paciente: ");
    scanf("%f", &paciente_pronto.peso);

    return paciente_pronto;
}

void inicializa_paciente(Paciente lista_paciente[], int tam){
    int i;

    for (i = 0; i < tam; i++) {
        lista_paciente[i].identificador = -1;   
    }
}

int inserir_paciente( Paciente lista_paciente[], int tam ){
    int i;
    int status = 0;

    for (i = 0; i < tam; i++) {
        if (lista_paciente[ i ].identificador == -1) {
            Paciente x = ler_paciente();

            lista_paciente[i] = x;
            status = 1;
            i = tam; 
        }
    }

    return status;   
}

void imprimir_lista(Paciente lista_paciente[], int tam){
    int lista_vazia = 0;
    int i;

    printf("Mostrando a lista de pacientes...\n");

    for (i = 0; i < tam; i++) {
        if (lista_paciente[i].identificador != -1) {
             imprimir_paciente(lista_paciente[i]);

             lista_vazia = 1;
        }
    }
    
    if (lista_vazia == 0 ) {
        printf("Nao existem pacientes na lista! \n");
    }
}

int editar_paciente(Paciente lista_paciente[], int tam){
    int editado = 0;
    char nome_buscar[100];

    printf("Digite o nome do paciente que voce quer editar: ");
    scanf("%s", nome_buscar);
    
    int i;

    for (i = 0; i < tam; i++) {

        if (strcmp(lista_paciente[i].nome, nome_buscar) == 0) {
            imprimir_paciente(lista_paciente[i]);
            
            int id = lista_paciente[i].identificador;
            Paciente paciente_editado = ler_paciente();
            paciente_editado.identificador = id;
            lista_paciente[i] = paciente_editado;
            
            editado = 1;
        }
        
    }
    
    return editado;
}

int apagar_paciente(Paciente lista_paciente[], int tam, int id){
    int i;
    int status = 0;

    for (i = 0; i < tam; i++) {
        if (lista_paciente[i].identificador == id) {
            lista_paciente[i].identificador = -1;
            status = 1;
        }
    }

    return status;
}

void calcula_media(Paciente lista_paciente[], int tam, int pacientes_adicionados){
    int i, soma_idade;
    float media_idade;

    soma_idade = 0;
    media_idade = 0;

    for (i = 0; i < tam; i++) {
        soma_idade += lista_paciente[i].idade;
    }

    media_idade = soma_idade / pacientes_adicionados;

    printf("A media de idade entre os pacientes adicionados e %f anos", media_idade);
}

void imprimir_paciente_pesado(Paciente lista_paciente[], int tam, int id_paciente) {
    int i;

    for (i = 0; i < tam; i++) {
        if (lista_paciente[i].identificador == id_paciente) {
            printf("Imprimindo os dados do paciente mais pesado da lista...\n");
            imprimir_paciente(lista_paciente[i]);
        }
    }
}

void verifica_paciente_pesado(Paciente lista_paciente[], int tam){
    int i = 0;
    float maior_peso;

    maior_peso = lista_paciente[i].peso;
    int id_paciente = lista_paciente[i].identificador;

    for (i = 1; i < tam; i++) {
        if (lista_paciente[i].peso > maior_peso) {
            maior_peso = lista_paciente[i].peso;
            id_paciente = lista_paciente[i].identificador;
        }        
    }

    imprimir_paciente_pesado(lista_paciente, tam, id_paciente);
}

void preenche_valores(Paciente lista_paciente[], int tam, int pacientes_adicionados){
    int i;

    for (i = pacientes_adicionados; i < tam; i++) {
        lista_paciente[i].idade = 0;
        lista_paciente[i].peso = 0;
    }
}

int main(){
    int tam;
    tam = definir_tamanho_lista();
    
    int pacientes_adicionados = 0;

    Paciente lista_paciente[tam];

    int opcao = 1;

    while (opcao != 0) {
        menu();
        scanf("%d", &opcao);

        if (opcao == 1) {
            inicializa_paciente(lista_paciente, tam);
        } else if (opcao == 2) {
            int res = inserir_paciente(lista_paciente, tam);
            
            if (res == 1) {
                printf("O paciente foi inserido! \n");
                pacientes_adicionados++;
            } else {
                printf("Desculpe, mas o paciente nao pode ser inserido. \n");
            }  
        } else if (opcao == 3) {
            imprimir_lista(lista_paciente, tam);
        } else if (opcao == 4) {
            int res = editar_paciente(lista_paciente, tam);

            if (res == 1) {
               printf("O paciente foi editado! \n"); 
            } else {
                printf("O paciente nao foi encontrado! \n");
            }
        } else if (opcao == 5) {
            printf("Digite o identificador do paciente que voce quer apagar: ");
           
            int id;
            scanf("%d", &id);

            int res = apagar_paciente(lista_paciente, tam, id);

            if (res == 1) {
                printf("O paciente foi apagado com sucesso!");
            } else {
                printf("O paciente nao pode ser apagado. ");
            } 
        } else if (opcao == 6) {
            if (pacientes_adicionados == 0) {
                printf("Voce deve adicionar pelo menos 1 paciente antes de usar a funcao!");
            } else if (pacientes_adicionados < tam) {
                preenche_valores(lista_paciente, tam, pacientes_adicionados);
                calcula_media(lista_paciente, tam, pacientes_adicionados);
            }
        } else if (opcao == 7) {
            if (pacientes_adicionados == 0) {
                printf("Voce deve adicionar pelo menos 1 paciente antes de usar a funcao!");
            } else if (pacientes_adicionados < tam) {
                preenche_valores(lista_paciente, tam, pacientes_adicionados);
                verifica_paciente_pesado(lista_paciente, tam);
            }
        } else if (opcao > 7 || opcao < 0) {
            printf("Desculpe, digite uma opcao valida!");
        }
    }

    return 0;
}