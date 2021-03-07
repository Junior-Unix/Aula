/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maluco.c
 * Author: a2104660
 *
 * Created on 28 de Agosto de 2018, 09:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int maluco(int argc, char** argv) {
    double prova1 = 0;
    double prova2 = 0;    
    double prova3 = 0;
    double prova4 = 0;
    double APS = 0;
    double media = 0;
    double nota_minima = 0;
    double final = 0;
    printf("Digite o valor da sua primeira prova:");
    scanf("%lf", &prova1);
    printf("Digite o valor da sua segunda prova:");
    scanf("%lf", &prova2);
    printf("Digite o valor da sua terceira prova:");
    scanf("%lf", &prova3);
    printf("Digite o valor da sua quarta prova:");
    scanf("%lf", &prova4);
    printf("Digite o valor da suas APS:");
    scanf("%lf", &APS);
   
    prova2 = prova2 * 2;
    prova3 = prova3 * 2;
    prova4 = prova4 * 3;
    APS = APS * 2;
    
    media = (prova1 + prova2 + prova3 + prova4 + APS)/9;
    if (media >= 6){
        printf("Você esta aprovado e sua nota é: %.1lf.", media);
        return 0;
    }
    if(media < 6){
        nota_minima = 10 - media;
        printf("Você tera que realizar o exame e sua nota minima no exame final deverá ser: %.1lf.\n", nota_minima);
        printf("Qual sua nota do exame?\n");
        scanf("%lf", &final);
        if(final >= nota_minima){
            printf("Você foi aprovado!");
            return 0;
        }
        else{
            printf("Você foi reprovado!");
        }
        
    }
    return (EXIT_SUCCESS);
}

