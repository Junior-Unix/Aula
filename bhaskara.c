 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: a2104660
 *
 * Created on 14 de Agosto de 2018, 08:24
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double a=0;
double b=0;
double c=0;
double x1=0;
double x2=0;
double rdelta=0;
int baskhara() {
    printf("Digite o valor de a:");
    scanf("%lf", &a);
    printf("Digite o valor de b:");
    scanf("%lf", &b);
    printf("Digite o valor de c:");
    scanf("%lf", &c);
    double delta= (b*b)-4*a*c;
    if(delta<0){
        printf("Não é real!\n");
        return 0;
    }
    else{
        rdelta= sqrt(delta);
        x1= (-b+rdelta)/(2*a); 
        x2= (-b-rdelta)/(2*a);
        printf("O valor de X1 é:%lf, e o valor de X2 é:%lf", x1, x2);
    }
    return 0;
    
}

