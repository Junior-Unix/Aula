/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Multiplos de Cinco.c
 * Author: a2104660
 *
 * Created on 11 de Setembro de 2018, 08:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int mult(int argc, char** argv) {
    int mult = 1;
    for(int i = 1;mult<500;i++){
        mult = 5 * i;
        printf("%i ", mult);
    }
    return (EXIT_SUCCESS);
}

