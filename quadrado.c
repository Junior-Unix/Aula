/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quadrado.c
 * Author: a2104660
 *
 * Created on 11 de Setembro de 2018, 08:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int quadrado(int argc, char** argv) {
    double num = 1;
    while(num>0){
        printf("Digite um número ou menor que zero para sair:");
        scanf("%lf", &num);
        if(num>0){
            num = num*num;
            printf("O valor do número ao quadrado é: %.0lf\n", num); 
        }
    }

    return (EXIT_SUCCESS);
}

