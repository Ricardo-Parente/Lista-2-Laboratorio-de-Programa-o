#include <stdio.h>

int main(){
    int altura1,altura2,i,anos;
    altura1 = 150;
    altura2 = 110;
    for (i = 0; altura2 < altura1; i++)
    {
        altura1 += 2;
        altura2 += 3;
    }
    printf("Ano em que jose ficou maior que pedro:%d",i);
    return 0;
}