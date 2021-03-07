#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    int numero;
}tipo_agenda;

void Iniciar(tipo_agenda *agenda){
    for(int i=0; i<50; i++){
        agenda[i].numero=-1;
    }
}

void Inserir(tipo_agenda *agenda){
    int indice=0;
    printf("Qual o indice do cadastro para adicionar: ");
    scanf("%i", &indice);
    setbuf(stdin, NULL);
    printf("Digite o nome do contato [%i]: ", indice);
    fgets(agenda[indice].nome, sizeof(agenda[indice].nome),stdin);
    agenda[indice].nome[strcspn(agenda[indice].nome,"\n")]='\0';
    do{
        printf("Digite o número de %s: ", agenda[indice].nome);
        scanf("%i", &agenda[indice].numero);
        setbuf(stdin, NULL);
        if(agenda[indice].numero<0){
            printf("Digite um número válido!");
        }
    }while(agenda[indice].numero<0);
}

void Remover(tipo_agenda *agenda){
    char nome[30];
    int indice=0;
    printf("Qual o nome do contato: ");
    fgets(nome, sizeof(nome),stdin);
    nome[strcspn(nome,"\n")]='\0';
    
    for(int i=0; i<50; i++){
        if(strcpy(agenda[i].nome, )==strcspn(nome)){
            indice=i;
        }
    }
    agenda[indice].numero=-1;
}

void Listar(tipo_agenda *agenda){
    for(int i=0; i<50; i++){
        if(agenda[i].numero!=-1){
            printf("%s: %i\n", agenda[i].nome, agenda[i].numero);
        }
    }
}

int main() {
    tipo_agenda agenda[50];
    int opcao=1;
    Iniciar(agenda);
    
    do{
        printf("1.Inserir\t2.Remover\t3.Listar\t0.Sair\n\t>>>");
        scanf("%i", &opcao);
        setbuf(stdin, NULL);
        switch(opcao){
            case 1:
                Inserir(agenda);
                break;
            case 2:
                Remover(agenda);
                break;
            case 3:
                Listar(agenda);
                break;
        }
    }while(opcao!=0);
    return 0;        
}