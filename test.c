#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int i = 1;
    int fator = 1;
    printf("Digite o numero a ser fatorado: ");
    scanf("%i", &i);
    while(i>0){
        fator = fator*i;
        i--;
    }
    printf("%i ", fator);

    return (EXIT_SUCCESS);
}
