/******************************************************************************

1. Estrutura do tipo Aluno
2. Lista de Aluno
3. Diversas funções para gerenciar uma lista de Alunos
    -Inicializar a lista
    -Imprimir um Aluno
    -Inserir um Aluno
    -Editar um Aluno
        Busca pelo nome
    -Apagar um Aluno
        Busca pelo identificador
    CRUD

*******************************************************************************/


#include <stdio.h>
#include <string.h>

typedef struct{
    int identificador;
    char nome[ 100 ];
    float nota1;
    float nota2;
} Aluno;


void imprimirMenu(){
    printf( "Gerencia de alunos \n" );
    printf( "\t 1 - Inicializar lista de alunos \n" );
    printf( "\t 2 - Inserir um aluno \n" );
    printf( "\t 3 - Imprimir a lista de alunos \n" );
    printf( "\t 4 - Editar um aluno pelo nome \n" );
    printf( "\t 5 - Apagar um aluno \n" );
    printf( " -1 para sair \n" );
    printf( " Digite uma opcao: " );
}

//Um Aluno com identificador == -1 significa que aquela posicao esta vazia
void inicializarLista( Aluno lista[], int tam ){
 
    int i;
    for( i = 0; i < tam; i++ ){
        lista[ i ].identificador = -1;   
    }
    
}

void imprimirAluno( Aluno a ){
    
    printf( " ----- Aluno ---- \n" );
    printf( "\t Nome: %s \n", a.nome );
    printf( "\t Matricula: %d \n", a.identificador );
    printf( "\t Nota 1: %f \n", a.nota1 );
    printf( "\t Nota 2: %f \n", a.nota2 );
    
}

Aluno lerAluno(){
    
    Aluno alunoLido;
    
    printf( "Digite o nome do aluno: " );
    scanf( "%s", alunoLido.nome );
    
    printf( "Digite a matricula do aluno: " );
    scanf( "%d", &alunoLido.identificador );
    
    printf( "Digite a nota 1 do aluno: " );
    scanf( "%f", &alunoLido.nota1 );
    
    printf( "Digite a nota 2 do aluno: " );
    scanf( "%f", &alunoLido.nota2 );
    
    return alunoLido;
}

void imprimirListaAlunos( Aluno lista[], int tam ){
    
    int listaVazia = 0;
    int i;
    printf( "Imprimindo a lista de alunos... \n" );
    for( i = 0; i < tam; i++ ){
        if( lista[ i ].identificador != -1 ){
             imprimirAluno( lista[ i ] );
             listaVazia = 1;
        }
    }
    
    if( listaVazia == 0 ) printf( "Nao existem alunos na lista \n" );

}

// 0 1 2 3 4 ..
//Insercao deve ser feita na primeira posicao livre da lista
//Retornar 1, caso algum aluno tenha sido inserido
//Retornar 0, caso a lista esteja cheia e o aluno nao possa ser inserido
int inserirAluno( Aluno lista[], int tam ){
    int i;
    
    int inserido = 0;
    //Percorrendo a lista
    for( i = 0; i < tam; i++ ){
        //Procurando por posicoes vazias
        if( lista[ i ].identificador == -1 ){
            Aluno a = lerAluno();
            lista[ i ] = a;
            inserido = 1;
            
            i = tam;
            
        }
    }
    
    return inserido;
}

//Edicao deve ser feita no aluno cujo nome é igual ao nome digitado
//Retornar 1, caso algum aluno tenha sido editado
//Retornar 0, caso o aluno nao tenha sido encontrado
int editarAluno( Aluno lista[], int tam ){
    
    int editado = 0;
    
    char nomeBuscar[ 100 ];
    printf( "Digite o nome do aluno a ser editado: ");
    scanf( "%s", nomeBuscar );
    
    int i;
    for( i = 0; i < tam; i++ ){
        if( strcmp( lista[ i ].nome, nomeBuscar ) == 0 ){
            
            imprimirAluno( lista[ i ] );
            
            int id = lista[ i ].identificador;
            Aluno alunoEditado = lerAluno();
            alunoEditado.identificador = id;
            lista[ i ] = alunoEditado;
            
            editado = 1;
            
        }
        
    }
    
    return editado;
    
}

int apagarAluno( Aluno lista[], int tam, int idApagar ){
    
    int apagado = 0;
    int i;
    
    for( i = 0; i < tam; i++ ){
        if( lista[ i ].identificador == idApagar ){
            lista[ i ].identificador = -1;
            apagado = 1;
        }
    }
    
    return apagado;
}

    //printf( "\t 1 - Inicializar lista de alunos \n" );
    //printf( "\t 2 - Inserir um aluno \n" );
   // printf( "\t 3 - Imprimir a lista de alunos \n" );
   // printf( "\t 4 - Editar um aluno pelo nome \n" );
   // printf( "\t 5 - Apagar um aluno \n" );
int main()
{
   int tam = 3;
   Aluno listaAlunos[ tam ];
   
   int opcao = 1;
   while( opcao != -1 ){
       
       imprimirMenu();
       scanf( "%d", &opcao );
       
       if( opcao == 1 ){
           inicializarLista( listaAlunos, tam );
       } else if( opcao == 2 ){
          int res = inserirAluno( listaAlunos, tam );
          
          if( res == 1 ) printf( "Aluno inserido com sucesso! \n");
          else printf( "O aluno nao pode ser inserido. \n" );
          
       } else if( opcao == 3 ){
           
           imprimirListaAlunos( listaAlunos, tam );
           
       } else if( opcao == 4 ){
           
          int res = editarAluno( listaAlunos, tam );
          
          if( res == 1 ) printf( "Aluno editado com sucesso! \n" );
          else printf( "Aluno nao encontrado \n" );
           
       } else if( opcao == 5 ){
           
           printf( "Delecao de um aluno. Digite a matricula do aluno a ser apagado: " );
           
           int idApagar;
           scanf( "%d", &idApagar );
           
           int res = apagarAluno( listaAlunos, tam, idApagar );
           
           if( res == 1 ) printf( "Aluno apagado com sucesso!" );
           else printf( "O aluno nao pode ser apagado. " );
           
       } 
   }

    return 0;
}
