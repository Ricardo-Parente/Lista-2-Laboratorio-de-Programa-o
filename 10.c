#include <stdio.h>

int main(){
    int quadrado,num,divisao;
    for (int i = 0; i < 73; i++)
    {
        puts("Valor do numero:");
        scanf("%d",&num);
        if (num > 15 && num < 90)
        {
            divisao = num % 4;
            if (divisao = 0)
            {
                quadrado = num * num;
                printf("quadrado do numero:%d",quadrado);
            }
            
        }
        else{
            puts("Invalido");
        }
    }
    return 0;
}