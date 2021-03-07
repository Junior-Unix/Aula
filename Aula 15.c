#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrica(double a, double b, double c){
    FILE *meu_arquivo=NULL;
    meu_arquivo = fopen("Quadrica.txt","w");
    if(meu_arquivo==NULL){
        printf("Erro de leitura");
        exit(1);
    }
    
    double x=-2;
    double y= pow(x,3)+pow(x,2)-5*x+3;
    
    for(int i=0; x<=7; i++){
        fprintf(meu_arquivo,"%lf\t%lf\n", x, y);
        x+=0.5;
        y= pow(x,3)+pow(x,2)-5*x+3;
    }
}

int aula_15(int argc, char** argv) {
    
   
    quadrica(1,2,3);
    
    return (EXIT_SUCCESS);
}