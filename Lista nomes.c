/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista nomes.c
 * Author: a2104660
 *
 * Created on 20 de Setembro de 2018, 08:55
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int Lista_nomes(int argc, char** argv) {
    
    char nome[11][1056];
    for(int i=0; i<10; i++){
        printf("Digite o nome %i:", i);
        fgets(nome[i],sizeof(nome[i]),stdin);
        nome[i][strcspn(nome[i],"\n")]='\0';  
    }
    
    for(int i=0; i<10; i++){
        printf("Nome %i: %s\n", i, nome[i]);
        
    }
        
    return (EXIT_SUCCESS);
}

