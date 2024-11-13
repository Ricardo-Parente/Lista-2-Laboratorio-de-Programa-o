#include <stdio.h>

int main(){
    int quadrado,num,divisao,A,B;
    for (int i = 0; i < 73; i++)
    {
        puts("Valor do numero:");
        scanf("%d\n",&num);

        puts("Intervalo 1");
        scanf("%d\n",&A);

        puts("Intervalo 2");
        scanf("%d\n",&B);
        
        if (num > A && num < B)
        {
            divisao = num % 4;
            if (divisao = 0)
            {
                quadrado = num * num;
                printf("quadrado do numero:%d",quadrado);
            }
            
        }
        else if (num > B && num < A)
        {
            divisao = num % 4;
            if (divisao = 0)
            {
                quadrado = num * num;
                printf("quadrado do numero:%d",quadrado);
            }
            
        }
        else
        {
            puts("Invalido");
        }
    }
    return 0;
}