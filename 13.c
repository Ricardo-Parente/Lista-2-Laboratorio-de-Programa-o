#include <stdio.h>

int main(){
    int A,B,resultado,P = 0, C = 0;
    
    puts("Valor de A:");
    scanf("%d",&A);
    
    puts("Valor de B:");
    scanf("%d",&B);

    if (A > B)
    {
        for ( B ; B < A; B++)
        {
            resultado = B % 2;
            switch(resultado){
            case 0:
                P = C + B;
                C = B;
                B = P;
                break;
            }
            
        }
    }
    else     
    {
        for ( A ; A < B; A++)
        {
            resultado = A % 2;
            switch (resultado){
            case 0:
                P = C + A;
                C = A;
                A = P;
                break;
            }
            
        }
    }
    printf("Somatorio dos termos pares:%d",P);
}