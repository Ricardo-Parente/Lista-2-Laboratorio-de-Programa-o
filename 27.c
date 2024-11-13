#include <stdio.h>

int main(){
    int num1,num2,num3,resultado;
    for (int i = 0; i < 5; i++)
    {
        puts("Valor do numero:");
        scanf("%d",&num1);
        puts("Valor do segundo numero:");
        scanf("%d",&num2);
        puts("Valor do terceiro numero:");
        scanf("%d",&num3);
        if (num1 > num2 && num2 > num3 )
        {
            resultado = num1 * num3;
            printf("Resultado:%d\n",resultado);
        }
        else if (num2 > num1 && num1 > num3 )
        {
            resultado = num2 * num3;
            printf("Resultado:%d\n",resultado);
        }
        else if (num3 > num1 && num1 > num2 )
        {
            resultado = num3 * num2;
            printf("Resultado:%d\n",resultado);
        }
        else if (num3 > num2 && num2 > num1 )
        {
            resultado = num3 * num1;
            printf("Resultado:%d\n",resultado);
        }
        else if (num2 > num3 && num3 > num1 )
        {
            resultado = num2 * num1;
            printf("Resultado:%d\n",resultado);
        }
        else if (num1 > num3 && num3 > num2 )
        {
            resultado = num1 * num2;
            printf("Resultado:%d\n",resultado);
        }
    }
}
