/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int media(){
    double n1 = 0;
    double n2 = 0;
    double n3 = 0;
    double n4 = 0;
    double r = 0;
    printf("Digite o primeiro numero:");
    scanf("%lf", &n1);
    printf("Digite o segundo numero:");
    scanf("%lf", &n2);
    printf("Digite o terceiro numero:");
    scanf("%lf", &n3);
    printf("Digite o quarto numero:");
    scanf("%lf", &n4);
    r = (n1+n2+n3+n4)/4.0;
    printf("A média aritimética é:%.2lf", r);
    return 0;
    
}