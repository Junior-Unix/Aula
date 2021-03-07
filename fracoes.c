/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fracoes.c
 * Author: a2104660
 *
 * Created on 28 de Agosto de 2018, 08:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int fracoes(int argc, char** argv) {   
    int numerador = 0;
    int denominador = 0;
    int div = 0;
    printf("Digite o númerador e em seguida o númerador:");
    scanf("%i/%i", &numerador, &denominador);
    if(numerador < denominador){
        printf("Essa fração é própria.");
        return 0;
    }
    else{
        div = numerador%denominador;
        if(numerador >= denominador){
            printf("Sua fração é imprópria.");
            if(div==0){
                printf("E essa fração é aparente.");
            }
        }
        
    }

    return (EXIT_SUCCESS);

}

