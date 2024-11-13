#include <stdio.h>

int main(){
    int somatorio = 0, j = 0, k = 1;
    for (int i = 0; i <= 64; i++)
    {
        somatorio += k;
        k = somatorio * 2;
    }
    printf("somatorio de graus:%d\n",somatorio);
    return 0;
}