/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   media de cinco.c
 * Author: a2104660
 *
 * Created on 11 de Setembro de 2018, 09:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int media_cinco(int argc, char** argv) {
    double nota1 = 0;
    double nota2 = 0;
    double nota = 0;
    int aluno = 0;
    while(aluno < 5){
        printf("Digite sua primeira nota: ");
        scanf("%lf", &nota1);
        printf("Digite sua segunda nota: ");
        scanf("%lf", &nota2);
        if(nota1>=0 && nota1<=10 && nota2>=0 && nota2<=10){
            nota = (nota1+nota2)/2.0;
            printf("Sua média é: %.3lf\n", nota);
            getchar();
            system("clear");
            
        }
        else{
            system("clear");
            printf("Digite uma nota válida!\n");
        }
        aluno++;
        
    }

    return (EXIT_SUCCESS);
}

