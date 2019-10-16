/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
int pezo(){
    double altura=0;
    double peso_ideal=0;
    printf("Digite o valor de sua altura:");
    scanf("%lf", &altura);
    peso_ideal= (72.7*altura)-58;
    printf("O peso ideal é:%.2lf", peso_ideal);
    return 0;
}
