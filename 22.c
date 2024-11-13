#include <stdio.h>
#define TAM 5
int main(){
    int palindromo[TAM],resultado[TAM],i=0;
    puts("Numero de 5 digitos:");
    scanf("%d\n",&palindromo[TAM]);

    resultado[0] = palindromo[4] % 7;
    resultado[1] = palindromo[3] % 7;
    resultado[2] = palindromo[2] % 7;
    resultado[3] = palindromo[1] % 7;
    resultado[4] = palindromo[0] % 7;
    
    if (resultado[TAM] = 0)
    {
        while (i < TAM)
        {
           i++;
        }
    }
    
    printf("Quantidade de numero divisiveis por 7:%d\n",i);

    return 0;
}