/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu.c
 * Author: a2104660
 *
 * Created on 28 de Agosto de 2018, 07:46
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

/*
 * 
 */
int menu(int argc, char** argv) {
    int menu = 0;
    int numero = 0;
    int idade = 0;
    printf("Digite sua opção:\n\t1)Verificar se par/impar\t2)Verifica maior/menor de idade\n\t>>>");
    scanf("%i",&menu);
    system("clear");
    switch(menu){
        case 1:
            printf("Digite o numero a ser verificado:");
            scanf("%i", &numero);
            numero = numero%2;
            if(numero==1){
                printf("Seu número é impar.");
                break;
                }
            else{
                printf("Seu número é par.");
                break;
            }
            
        case 2:
            printf("Digite a sua idade:");
            scanf("%i", &idade);
            if (idade < 18){
                printf("Você é menor de idade.");
                break;
            }
            else{
                printf("Você é maior de idade");
                break;
            }
            break;
    }

    return (EXIT_SUCCESS);
}

