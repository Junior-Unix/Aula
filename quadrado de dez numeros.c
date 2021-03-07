/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quadrado de dez numeros.c
 * Author: a2104660
 *
 * Created on 13 de Setembro de 2018, 08:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int quadrado_de_dez(int argc, char** argv) {
    for(int i=0, num=0; i<10; i++){
        printf("Digite o número para ser elevado ao quadrado:\n");
        scanf("%i", &num);
        num = num*num;
        printf("Ao quadrado é: %i.\n", num);
    }
    return (EXIT_SUCCESS);
}

