/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int juros(){
    double poupanca = 1500;
    double juros = 1.0/100;
    double final = 0;
    double adicional = 0;
    adicional = pow (1+juros,3);
    final = poupanca*adicional;
    printf("%lf",final);
    return 0;
}