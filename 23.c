#include <stdio.h>

int main(){
    int a,resultado;
    puts("Valor do numero:");
    scanf("%d",&a);
    resultado = (a++) - (++a); 
    printf("resultado:%d",resultado);
    //como o resultado deu negativo é porque se colocarmos ++ antes da variavel ela incrementa primeiro e se colocarmos depois ela incrementa depois
}