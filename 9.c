#include <stdio.h>

int main(){
    int num1,num2,resultado;
    resultado = 0;
    num1 = 1;
    num2 = 0;
    for (int i = 0; i < 20; i++)
    {
        resultado = num1 + num2;
        printf("Fibonacci:%d\n",resultado);
        num1 = num2;
        num2 = resultado;
    }
    
    return 0;
}