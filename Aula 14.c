#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substituir(char *string){
    FILE *meu_arquivo = NULL;
    
    meu_arquivo = fopen("arquivo.txt","w");
    if(meu_arquivo == NULL ){
        printf("Erro de leitura!");
        exit(1);
    }
    
for(int i=0; i<strlen(string);i++){

        while(feof(meu_arquivo)== 0){
            
        fputc(string[i], meu_arquivo);
        fputc('-', meu_arquivo);   
        if(string[i]== ' '){
            fputc('#', meu_arquivo);
            }
        }   
    }    
    if(fclose(meu_arquivo)!= 0){
        printf("Erro ao fechar arquivo!");
        exit(1);
    }
    
}

int Aula_14(){
        
    char texto[45] = "Universidade Tecnologica Federal do Parana";
    substituir(texto);

    return (EXIT_SUCCESS);
}

