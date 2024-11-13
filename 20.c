#include <stdio.h>

int main(){
    int somatorio;
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
           somatorio += i;

        }
        
    }
    printf("Valor do fatorial dos numeros imapares:%d\n",somatorio);
    
}