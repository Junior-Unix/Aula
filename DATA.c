/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DATA.c
 * Author: a2104660
 *
 * Created on 30 de Agosto de 2018, 07:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int data(int argc, char** argv) {
    int dia = 0;
    int mes = 0;
    int ano = 0;
    printf("Digite um dia: ");
    scanf("%i", &dia);
    printf("Digite um mes: ");
    scanf("%i", &mes);
    printf("Digite um ano: ");
    scanf("%i", &ano);
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if (dia <= 31){
            printf("Sua data é válida!");
            return (EXIT_SUCCESS);
        }
        else{
            printf("Sua data não é válida!");
            return (EXIT_SUCCESS);
        }
        
    }
    if(mes == 2){
        if(ano % 400 == 0){
            if(dia <= 29){
                printf("Sua data é válida!");
                return (EXIT_SUCCESS);
            }
            else{
                printf("Sua data não é válida!");
                return (EXIT_SUCCESS);
            }
        }
    if(ano % 400 != 0 ){
            if(dia <= 28){
                printf("Sua data é válida!");
                return (EXIT_SUCCESS);
            }
            else{
                printf("Sua data não é válida!");
                return (EXIT_SUCCESS);
            }
        }    
    }
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia <= 30){
            printf("Sua data é válida!");
            return (EXIT_SUCCESS);
        }
        else{
            printf("Sua data não é válida!");
            return (EXIT_SUCCESS);
        }
        
    }
    return (EXIT_SUCCESS);
}

