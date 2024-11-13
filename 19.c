#include <stdio.h> 

int main(){
    int faixa;
    double somatorio,media;
    puts("faixa de numeros:");
    scanf("%d",&faixa);
    for (int i = 0; i <= faixa; i++)
    {
        somatorio += i;
    }
    media = (somatorio / faixa);
    printf("media aritmetica:%0.1lf\n",media);
}