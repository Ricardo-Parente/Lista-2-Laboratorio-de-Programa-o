#include <stdio.h>

int main(){
    char semana,i;
    puts("numero do dia da semana:");
    scanf("%c",&semana);
    puts("1.para executar");
    puts("0. para parar de executar");
    scanf("%c",&i);
    if (i == 0)
    {
        puts("Execucao terminada");
    }
    else{
        switch (semana)
        {
        case '0':
            puts("domingo");
            break;
        case '1':
            puts("segunda");
            break;
        case '2':
            puts("terca");
            break;
        case '3':
            puts("quarta");
            break;
        case '4':
            puts("quinta");
            break;
        case '5':
            puts("sexta");
            break;
        case '6':
            puts("sabado");
            break;
        default:
            puts("numero do dia invalido");
            break;
        }
    }
    return 0;
}