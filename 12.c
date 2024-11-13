#include <stdio.h>

int main(){
    int num,resultado;
    puts("Valor do numero:");
    scanf("%d\n",&num);
    for (int i = 1; i < 11; i++)
    {
        resultado = num * i;
        printf("Tabuada:%d\n",resultado);
    }
    return 0;
}