/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fatorial.c
 * Author: a2104660
 *
 * Created on 11 de Setembro de 2018, 08:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int fatorial(int argc, char** argv) {
    int i = 1;
    int fator = 1;
    printf("Digite o numero a ser fatorado: ");
    scanf("%i", &i);
    while(i>0){
        fator = fator*i;
        i--;
    }
    printf("%i ", fator);

    return (EXIT_SUCCESS);
}


