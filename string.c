/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   string.c
 * Author: a2104660
 *
 * Created on 20 de Setembro de 2018, 08:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int string(int argc, char** argv) {

    char texto[256];
    printf("Digite um texto:\n");
    fgets(texto,sizeof(texto),stdin);
    texto[strcspn(texto,"\n")]='\0';
    printf("Texto digitado: %s\n",texto);
    printf("Primeira letra: %c",texto[0]);
    return (EXIT_SUCCESS);
}