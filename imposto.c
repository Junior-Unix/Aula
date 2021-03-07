/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   imposto.c
 * Author: a2104660
 *
 * Created on 23 de Agosto de 2018, 07:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int imposto(int argc, char** argv) {
    double salario=0;
    printf("Digite seu salário:");
    scanf("%lf", &salario);
    if (salario < 1903.98){
        printf("Não precisa pagar imposto de renda.");
    }
    if (1903.98 < salario && salario < 2826.65){
        double aliquota = 7.5/100;
        double parcela = 142.80;
        double calculo = salario*aliquota-parcela;
        printf("Você precisa pagar:%.2lf", calculo);
    }
    if (2826.66 < salario && salario < 3751.05){
        double aliquota = 15.0/100;
        double parcela = 354.80;
        double calculo = salario*aliquota-parcela;
        printf("Você precisa pagar:%.2lf", calculo);
    }
    if (3751.06 < salario && salario < 4664.68){
        double aliquota = 22.5/100;
        double parcela = 636.13;
        double calculo = salario*aliquota-parcela;
        printf("Você precisa pagar:%.2lf", calculo);
    }
    if (salario > 4664.68){
        double aliquota = 27.5/100;
        double parcela = 869.36;
        double calculo = salario*aliquota-parcela;
        printf("Você precisa pagar:%.2lf", calculo);
    }
    return (EXIT_SUCCESS);
}

