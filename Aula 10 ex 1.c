#include <stdio.h>
#include <stdlib.h>

void multiplica(double a, double b, double *c){
    *c = a*b;
}

int aula10_ex1(int argc, char** argv) {
    double c=0, a=0, b=0;
    
    printf("Digite o primeiro valor:");
    scanf("%lf", &a);
    printf("Digite o segundo valor:");
    scanf("%lf", &b);
    multiplica(a,b,&c);
    printf("Resultado: %.0lf", c);

    return (EXIT_SUCCESS);
}
