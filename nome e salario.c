/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nome e salario].c
 * Author: a2104660
 *
 * Created on 20 de Setembro de 2018, 09:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int nome_salario(int argc, char** argv) {
    char nome[6][1056];
    char salario[6][6];
    
    for(int i=0;i<5;i++){
        printf("Digite o nome %i: ", i);
        fgets(nome[i],sizeof(nome[i]),stdin);
        printf("Digite o valor do salario %i:", i);
        fgets(salario[i],sizeof(salario[i]),stdin);

    }
    
    for(int i=0; i<5; i++){
        printf("Nome %i: %s", i, nome[i]);
        printf("Salario %i: %s\n", i, salario[i]);
    }
 
    return (EXIT_SUCCESS);
}

