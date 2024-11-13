#include <stdio.h>

int main(){
    int quociente,resultado,b;
    for (int i = 1; i <= 256; i++)
    {
        printf("Valor em octal: %#o\n",i);
        printf("Valor em hexadecimal: %#x\n",i);
        resultado = i / 2;
        if (resultado = 1)
        {
            quociente = i % 2;
            b = resultado + quociente;
            printf("Valor em binario:%d\n",b);
        }
    }
    
}