#include <stdio.h>

int main(){
    unsigned char x,y,z; 
    puts("Valor de y:"); 
    scanf("%hhu",&y);
    puts("Valor de x:"); 
    scanf("%hhu",&x);
        z = y | x;
        printf("Z:%hhu",z);

}