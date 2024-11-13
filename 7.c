#include <stdio.h>

int main(){
    int num,divisor,resultado;
    while (divisor != 0)
    {
        puts("divisor:");
        scanf("%d\n",&divisor);

        puts("numero:");
        scanf("%d\n",&num);

        resultado = num / divisor;
        printf("Valor da divisao:%d\n",resultado);
    }
    return 0;
}