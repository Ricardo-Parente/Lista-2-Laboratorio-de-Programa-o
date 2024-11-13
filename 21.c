#include <stdio.h>
#define TAM 5

int main(){
    int palindromo[TAM],resultado[TAM];

    puts("Numero de 5 digitos:");
    scanf("%d\n",&palindromo[TAM]);

    resultado[0] = palindromo[4];
    resultado[1] = palindromo[3];
    resultado[2] = palindromo[2];
    resultado[3] = palindromo[1];
    resultado[4] = palindromo[0];

    if (resultado[TAM] = palindromo[TAM])
    {
        puts("e um palindromo");
    }
    else{
        puts("nao e um palindromo");
    }
    return 0;
}