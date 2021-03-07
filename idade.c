/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

int idade(){
    double ano=0;
    double idade=0;
    double nascimento=0;
    printf("Digite o ano em que estamos:\n");
    scanf("%lf",&ano);
    printf("Digite sua idade:\n");
    scanf("%lf",&idade);
    nascimento=ano-idade;
    printf("O seu ano de nascimento é: %.0lf", nascimento);
    return 0;
}
