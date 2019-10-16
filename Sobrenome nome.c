/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sobrenome nome.c
 * Author: a2104660
 *
 * Created on 25 de Setembro de 2018, 08:46
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int sobrenome(int argc, char** argv) {
    char nome[11];
    char sobrenome[11];
    printf("Digite um nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome,"\n")]='\0';
    printf("Digite um sobrenome: ");
    fgets(sobrenome,sizeof(nome),stdin);
    sobrenome[strcspn(sobrenome,"\n")]=',';
    strcat(sobrenome, nome);
    printf("%s",sobrenome);

    return (EXIT_SUCCESS);
}

