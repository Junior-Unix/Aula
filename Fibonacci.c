/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fibonacci.c
 * Author: a2104660
 *
 * Created on 11 de Setembro de 2018, 08:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int fibo(int argc, char** argv) {

    double n=0;
    printf("Digite o valor do número de elementos:");
    scanf("%lf", &n);
        for(double t=0,t1=0,t2=1;n>0;n--){
            t = t1 + t2;
            printf("%.0lf ", t);
            t2=t1;
            t1=t;
            }
    return (EXIT_SUCCESS);
}

