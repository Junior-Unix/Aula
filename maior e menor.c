/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maior e menor.c
 * Author: a2104660
 *
 * Created on 13 de Setembro de 2018, 08:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int maior(int argc, char** argv) {
    int maior = -1;
    int menor = 101;
    int num = 0;
    for (int i = 0; i < 7; i++) {
        do{
            printf("Digite um número positivo menor que cem:\n");
            scanf("%i", &num);
        }while(num<0 || num>100);
        if (maior < num)
            maior = num;
        if (menor > num)
            menor = num;
    }
    printf("O maior é %i e o menor é %i.", maior, menor);

    return (EXIT_SUCCESS);
}

