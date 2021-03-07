/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int salario(){
    double base = 1200;
    double comissao = 10.0/100;
    double vendas = 0;
    double salario = 0;
    printf("Digite o numero suas vendas no mês:");
    scanf("%lf", &vendas);
    salario = (comissao * base) * vendas + base;
    printf("Seu salário é:%.0lf", salario);
    return 0;
    
}