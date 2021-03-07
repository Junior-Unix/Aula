/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Par entre 240 e 730.c
 * Author: a2104660
 *
 * Created on 13 de Setembro de 2018, 08:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int entre(int argc, char** argv) {
    for (int i = 240; i <= 730; i=i+2) {
        printf("%i ",i);

    }

    return (EXIT_SUCCESS);
}

