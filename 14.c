#include <stdio.h>

int main(){
    int A,B,resultado,i=0;
    
    puts("Valor de A:");
    scanf("%d",&A);
    
    puts("Valor de B:");
    scanf("%d",&B);

    if (A > B)
    {
        for ( B ; B < A; B++)
        {
            resultado = B % 3;
            switch(resultado){
            case 0:
            i++;
            }
            
        }
    }
    else     
    {
        for ( A ; A < B; A++)
        {
            resultado = A % 3;
            switch (resultado){
            case 0:
            i++;
            }
            
        }
    }
    printf("Numero divisiveis por 3:%d", i);
}