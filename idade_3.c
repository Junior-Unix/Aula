/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   idade_3.c
 * Author: a2104660
 *
 * Created on 4 de Setembro de 2018, 08:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int idade_3(int argc, char** argv) {
    int a = 0;
    int b = 0;
    int c = 0;
    int maior = 0;
    int menor = 0;
    
    printf("Digite a primeira idade: ");
    scanf("%i", &a);
    printf("Digite a segunda idade: ");
    scanf("%i", &b);
    printf("Digite a terceira idade: ");
    scanf("%i", &c);
    
    if(a >= b && b >= c){
        maior = a;
        menor = c;
    }
    if(a >= c && c >= b){
        maior = a;
        menor = b;
    }
    if(b >= a && a >= c){
        maior = b;
        menor = c;
    }
    if(b >= c && c >= a){
        maior = b;
        menor = a;
    }
    if(c >= a && a >= b){
        maior = c;
        menor = b;
    }
    if(c >= b && b >= a){
        maior = c;
        menor = a;
    }
    printf("Maior idade: %i, Menor idade: %i\n", maior, menor);
    if(a==b && b==c){
        printf("Tres idades iguais!!!\n");
    }
    else{
        if(a==b || b==c || c==a){
            printf("Duas idades iguais de valor: %i !\n",a==b?a: b==c?c: c==a?c:0);
            
        }
        else{
            printf("Tres idades diferentes!!!\n");
        }
    }
    
    return (EXIT_SUCCESS);
}

