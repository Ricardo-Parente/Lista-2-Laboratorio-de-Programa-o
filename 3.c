#include <stdio.h>

int main(){
    int F,fatorial,i;
    puts("Valor de F:");
    scanf("%d",&F);
    fatorial = 1;
    for (i = 1; i <= F; i++)
    {
        fatorial *= i;
    }
    printf("Valor do fatorial:%d",fatorial);
    return 0;
}