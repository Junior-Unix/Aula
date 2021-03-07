/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista telefone.c
 * Author: a2104660
 *
 * Created on 25 de Setembro de 2018, 07:55
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int lista_telefones(int argc, char** argv) {
    char frase[64];
    int a=0;
    int e=0;
    int i=0;
    int o=0;
    int u=0;
    printf("Digite um frase:");
    fgets(frase,sizeof(frase),stdin);
    frase[strcspn(frase,"\n")]='\0';
    for(int n=0; n<strlen(frase);n++){
        if(frase[n]=='a'||frase[n]=='A'){
            a++;
        }
        if(frase[n]=='e'||frase[n]=='E'){
            e++;
        }
        if(frase[n]=='i'||frase[n]=='I'){
            i++;
        }
        if(frase[n]=='o'||frase[n]=='O'){
            o++;
        }
        if(frase[n]=='u'||frase[n]=='U'){
            u++;
        }
    }
    printf("A: %i, E: %i, I: %i, O: %i, U: %i.", a, e, i, o, u);

    return (EXIT_SUCCESS);
}

