/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   matriz.h
 * Author: a2104660
 *
 * Created on 27 de Novembro de 2018, 09:12
 */

#ifndef MATRIZ_H
#define MATRIZ_H

#ifdef __cplusplus
extern "C" {
#endif
    
char **matriz_char(int linhas, int colunas){

    char **matriz=NULL;
    
    matriz=(char **) malloc(linhas*sizeof(char *));
    for(int i=0; i<linhas; i++)
        matriz[i]=(char *) malloc(colunas*sizeof(char));
    
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            matriz[i][j]='c';           
        }
    }
    
    return matriz;
}

int **matriz_int(int linhas, int colunas){

    int **matriz=NULL;
    
    matriz=(int **) malloc(linhas*sizeof(int *));
    for(int i=0; i<linhas; i++)
        matriz[i]=(int *) malloc(colunas*sizeof(int));
    
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            matriz[i][j]=0;           
        }
    }
    
    return matriz;
}

double **matriz_double(double linhas, double colunas){

    double **matriz=NULL;
    
    matriz=(double **) malloc(linhas*sizeof(double *));
    for(int i=0; i<linhas; i++)
        matriz[i]=(double *) malloc(colunas*sizeof(double));
    
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            matriz[i][j]=0.0;           
        }
    }
    
    return matriz;
}

#ifdef __cplusplus
}
#endif

#endif /* MATRIZ_H */

