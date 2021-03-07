/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   montante.c
 * Author: a2104660
 *
 * Created on 28 de Agosto de 2018, 09:43
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int montante(int argc, char** argv) {
    
    double capital = 0;
    double taxa = 0;
    double meses = 0;
    double montante =0;
    
    printf("Digite o valor do seu capital investido:");
    scanf("%lf", &capital);
    printf("Digite o valor da sua taxa de rendimento da aplicação em %:");
    scanf("%lf", &taxa);
    printf("Digite o valor da quantidade de meses:");
    scanf("%lf", &meses);
    taxa = taxa/100;
    if (meses < 6){
        montante = capital * pow((1 + taxa), meses);
        montante = montante*0.225;
        printf("Seu montante final será: %.3lf", montante);
        return (EXIT_SUCCESS);
   }
    if (meses > 6 && meses < 12){
       montante = capital * pow((1 + taxa), meses); 
       montante = montante*0.2;
       printf("Seu montante final será: %.3lf", montante);
        return (EXIT_SUCCESS);
    }
    if (meses > 12 && meses < 24){
        montante = capital * pow((1 + taxa), meses);
        montante = montante*0.175;
        printf("Seu montante final será: %.3lf", montante);
        return (EXIT_SUCCESS);
    }
    else{
        montante = capital * pow((1 + taxa), meses);
        montante = montante*0.15;  
        printf("Seu montante final será: %.3lf", montante);
        return (EXIT_SUCCESS);
    }

    return (EXIT_SUCCESS);
}

