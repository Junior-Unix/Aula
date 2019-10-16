/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

int res(){
    double pot=60;
    double cor=0.5;
    double volt=pot/cor;
    double res=volt/cor;
    printf("A resistência é:%lf", res);
    return 0;
}
