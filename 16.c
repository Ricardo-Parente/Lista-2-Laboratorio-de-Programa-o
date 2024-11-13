#include <stdio.h>

int main(){
    int somatorio=0,divisao,somatorio1=0;
    for (int i = 0; i < 101; i++)
    {
        divisao = i % 3;
        switch (divisao)
        {
        case 0:
            somatorio = somatorio + i;
            break;
        }
    }
    printf("somatorio de 3:%d\n",somatorio);
    for(int j = 101; j < 201; j++){
    divisao = j % 5;
    switch (divisao){
    case 0:
        somatorio1 = somatorio1 + j;
        break;
    }
    }
    printf("somatorio de 5:%d\n",somatorio1);
}