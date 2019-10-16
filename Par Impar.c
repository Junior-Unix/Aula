/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Par Impar.c
 * Author: a2104660
 *
 * Created on 23 de Agosto de 2018, 07:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int Par(int argc, char** argv) {
    int numero = 0;
    printf("Digite um número:");
    scanf("%i", &numero);
    int div = numero%2;
    if (div == 0){
        printf("Esse número é par.");
    }
    else{
        printf("Esse número é impar.");
    }

    return (EXIT_SUCCESS);
}

