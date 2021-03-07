/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nota.c
 * Author: a2104660
 *
 * Created on 23 de Agosto de 2018, 07:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int nota(int argc, char** argv) {
    double nota=0;
    printf("Digite sua nota:");
    scanf("%lf", &nota);
    printf("%s", nota>=60?"Aprovado!":"Reprovado");
    return (EXIT_SUCCESS);
}

