#include <stdio.h>
#include <math.h>

int main(){
    int potencia;
    for (int i = 0; i < 8; i++)
    {
        potencia = pow(3,i);
        printf("potencias de 3:%d\n",potencia);
    }
    
}