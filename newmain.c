#include <stdio.h>
#include <stdlib.h>

int numeros3(int num1,int num2, int num3){
    if(num1 <=0 || num2 <=0 || num3<=0){
        printf("-1");
        return -1;
    }
    if(num1==num2 && num1==num3 && num2==num3){
        printf("0");
        return 0;
    }
    if(num1>num2 && num1>num3){
        printf("%i", num1);
        return num1;
    }
    if(num2>num1 && num2>num3){
        printf("%i", num1);
        return num2;
    }
    if(num3>num1 && num3>num2){
        printf("%i", num1);
        return num3;
    }
}

int main(int argc, char const *argv[]){
    int numero1 = 0, numero2=0, numero3=0;
    printf("Digite o primeiro número:");
    scanf("%i", &numero1);
    printf("Digite o segundo número:");
    scanf("%i", &numero2);
    printf("Digite o terceiro número:");
    scanf("%i", &numero3);
    numeros(numero1, numero2, numero3);
}
