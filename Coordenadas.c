/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Coordenadas.c
 * Author: a2104660
 *
 * Created on 25 de Setembro de 2018, 09:24
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int coordenadas(int argc, char** argv) {
    double distancia=0;
    struct coordenada{
        double x;
        double y;
    };
    struct coordenada ponto1;
    printf("Digite o valor de X1: ");
    scanf("%lf", &ponto1.x);
    printf("Digite o valor de Y1: ");
    scanf("%lf", &ponto1.y);
    
    struct coordenada ponto2;
    printf("Digite o valor de X2: ");
    scanf("%lf", &ponto2.x);
    printf("Digite o valor de Y2: ");
    scanf("%lf", &ponto2.y);
    
    distancia = sqrt(pow((ponto2.x-ponto1.x),2)+pow((ponto2.y-ponto1.y),2));
    
    printf("Distância: %lf", distancia);
    return (EXIT_SUCCESS);
}

