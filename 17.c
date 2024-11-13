#include <stdio.h>

int main(){
    int divisao,farenheit;
    for (int i = 10; i < 101; i++)
    {
        divisao = i % 10;
        switch (divisao)
        {
        case 0:
            farenheit = (i * 1.8) + 32;
            printf("Valor em celsius:%d\n",i);
            printf("Valor em farenheit:%d\n",farenheit);
            break;
        }
    }
}