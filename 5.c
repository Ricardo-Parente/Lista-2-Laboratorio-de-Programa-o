#include <stdio.h>

int main(){
    int n,n1,n2;
    while (n != 0)
    {
        puts("Valor de n:");
        scanf("%d",&n);
        puts("Segundo Valor de n:");
        scanf("%d",&n1);
        if (n>n1)
        {
            printf("Primeiro valor é maior:%d",n);
        }
        else{
            printf("Segundo valor é maior:%d",n1);
        }
    }
    return 0;
}