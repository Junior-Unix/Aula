/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Impar entre cinco e setenta.c
 * Author: a2104660
 *
 * Created on 11 de Setembro de 2018, 08:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int impar_cinco(int argc, char** argv) {
    int i = 5;
    
    while(i<70){
        if(i%2 == 1){
            printf("%i ", i);
        }
        i++;
    }

    return (EXIT_SUCCESS);
}

