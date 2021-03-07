#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *AlocaVetor(int n){
    double *vetor=NULL;
    vetor = (double *) malloc(n*sizeof(double));
    for(int i=0; i<n; i++){
        printf("Digite o valor do elemento [%i]: ", i);
        scanf("%lf", &vetor[i]);
    }
    return vetor;
}

double **CalculaMatriz(int n, double *vetore, int m){
    double **matriz=NULL;
    matriz = (double **) malloc(n*sizeof(double *));
    for(int i=0; i<n; i++)
        matriz[i]=(double *) malloc(m*sizeof(double));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matriz[i][j]= pow(vetore[i],j);
        }
        
    }
    return matriz;
}

int aaaa(int argc, char** argv) {
    int x=0;
    int colunas=0;
    double *vector=NULL;
    double **matrix=NULL;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &x);
    
    vector = AlocaVetor(x);
    
    printf("Digite o numero de colunas da matriz: ");
    scanf("%i", &colunas);
    
    matrix = CalculaMatriz(x, vector, colunas);
    
    for(int i=0; i<x;i++){
        for(int j=0; j<colunas; j++){
            printf("%.0lf\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}