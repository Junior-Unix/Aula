/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

int litros(){
double min= 35;
double hora=60;
double velocidade=80;
double km_litros=12;
double litro=((min/hora)*velocidade)/km_litros;
printf("A quantidade de litros gasta é: %lf", litro);
return 0;
}