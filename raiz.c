/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int raiz(){
    double raiz = 0;
    printf("Digite o numero a ser radiciado:");
    scanf("%lf", &raiz);
    raiz= sqrt(raiz);
    printf("Sua raiz é:%lf", raiz);
    return 0;
    
}