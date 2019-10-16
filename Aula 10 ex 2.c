#include <stdio.h>
#include <stdlib.h>

int numeros(int num1,int num2){
    if(num1 <=0 || num2 <=0){
        printf("-1");
        return -1;
    }
    if(num1==num2){
        printf("0");
        return 0;
    }
    if(num1>num2){
        printf("%i", num1);
        return num1;
    }
    if(num2>num1){
        printf("%i", num2);
        return num2;
    }
    
}

int Aula10_ex2(int argc, char const *argv[]){
    int numero1 = 0, numero2=0;
    printf("Digite o primeiro número:");
    scanf("%i", &numero1);
    printf("Digite o primeiro número:");
    scanf("%i", &numero2);
    numeros(numero1, numero2);
}