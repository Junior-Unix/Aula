/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   idade-2.c
 * Author: a2104660
 *
 * Created on 23 de Agosto de 2018, 08:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int idade_2(int argc, char** argv) {
    
double idade=0;
printf("Digite a sua idade: ");

scanf("%lf", &idade);

if( idade >= 18 ) 
    printf("Voce possui %.0lf e é maior de idade! ",idade);
else { 
    printf("Pode ser adolescente ou criança...\n");
    if (idade > 12) 
        printf("Voce possui %.0lf e é adolescente! ",idade);
    else
        printf("Voce possui %.0lf e é criança! ",idade);
 } 
    return (EXIT_SUCCESS);
}

