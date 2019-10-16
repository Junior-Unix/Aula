#include <stdio.h>
#include <stdlib.h>

int fatorial(int x){
    if(x>0){
        return x * fatorial(x-1);
    }
    return 1;
}


int Aula13(){
    int a=0;
    printf("Digite um numero a ser calculado fatorial: \n");
    scanf("%i", &a);
    printf("%i",fatorial(a));
    return(EXIT_SUCCESS);
}

