#include <stdio.h>
#include <stdlib.h>

double **aloca_matriz(int NL,int NC){
        double **matriz=NULL;
        matriz = (double **) malloc(NL*sizeof(double*));
        
        for(int i=0; i<NL; i++)
            matriz[i]=(double *) malloc(NC*sizeof(double*));
        
        for(int i=0; i<NL; i++){
            for(int j=0; j<NC; j++){
                matriz[i][j]=1;
            }
        }    
        return matriz;
    }

void desaloca(double **matriz_generica){
    free(matriz_generica);
    matriz_generica=NULL;
}

int aula11_2(int argc, char** argv) {
    int matrizNL=0;
    int matrizNC=0;
    double **matre=NULL;
    printf("Digite o tanho de linhas da matriz: ");
    scanf("%i", &matrizNL);
    printf("Digite o tanho de colunhas da matriz: ");
    scanf("%i", &matrizNC);
    
    matre= aloca_matriz(matrizNL,matrizNC);
    
    for(int i=0; i<matrizNL; i++){
        for(int j=0; j<matrizNC;j++){
            printf("%.0lf ",matre[i][j]);
        }
        printf("\n");

    }
    
    desaloca(matre);
    
    return (EXIT_SUCCESS);
}