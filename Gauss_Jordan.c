/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: victor
 *
 * Created on 1 de Setembro de 2018, 16:30
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int gj(int argc, char** argv) {
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;
    double b1 = 0;
    double b2 = 0;
    
    printf("\t[ X1 Y1 : B1 ]\n"
            "\t[ X2 Y2 : B2 ]\n");
    printf("Digite o valor de X1:");
    
    scanf("%lf", &x1);
    system("clear");
    printf("\t[ %.0lf  Y1 : B1 ]\n"
            "\t[ X2 Y2 : B2 ]\n", x1);
    
    printf("Digite o valor de Y1:");
    scanf("%lf", &y1);
    system("clear");
    printf("\t[ %.0lf  %.0lf : B1 ]\n"
            "\t[ X2 Y2 : B2 ]\n", x1, y1);
    
    printf("Digite o valor de B1:");
    scanf("%lf", &b1);
    system("clear");
    printf("\t[ %.0lf  %.0lf : %0.lf ]\n"
            "\t[ X2 Y2 : B2 ]\n", x1, y1, b1);
    
    printf("Digite o valor de X2:");
    scanf("%lf", &x2);
    system("clear");
    printf("\t[ %.0lf  %.0lf : %0.lf ]\n"
            "\t[ %0.lf Y2 : B2 ]\n", x1, y1, b1, x2);
    
    printf("Digite o valor de Y2:");
    scanf("%lf", &y2);
    system("clear");
    printf("\t[ %.0lf  %.0lf : %0.lf ]\n"
            "\t[ %0.lf %0.lf : B2 ]\n", x1, y1, b1, x2, y2);
    
    printf("Digite o valor de B2:");
    scanf("%lf", &b2);
    system("clear");
    printf("\t[ %.0lf  %.0lf : %0.lf ]\n"
            "\t[ %0.lf  %0.lf : %0.lf ]\n", x1, y1, b1, x2, y2, b2);
   
    b1 = b1*(1/x1);
    y1 = y1*(1/x1);
    x1 = x1*(1/x1);
    
    y2 = -x2*y1+y2;
    b2 = -x2*b1+b2;
    x2 = -x2*x1+x2;
    
    b2 = b2*(1/y2);
    y2 = y2*(1/y2);
    
    b1 = -y1*b2+b1;
    y1 = -y1*y2+y1;
    
    printf("\t[ %.0lf  %.0lf : %lf ]\n"
            "\t[ %0.lf  %0.lf : %lf ]\n", x1, y1, b1, x2, y2, b2);
    return (EXIT_SUCCESS);
}