#include <stdio.h>

int main(){
    unsigned char voto;
    int i=0,j=0,l=0,k=0;
    puts("5. Votar em Paulo");
    puts("7. Votar em Renata");
    puts("0. Votar nulo");
    while (voto < 128)
    {
        for (int m = 128; m > voto; )
        {
            scanf("%hhu",&voto);
            if (voto!=7 && voto!=5 && voto!=0)
            {
                puts("Voto nulo");
                l++;
            }
            else
            {
                switch (voto)
                {
                case 5:
                    puts("Voto Paulo");
                    i++;
                    break;
                case 7:
                    puts("Voto Renata");
                    j++;
                    break;
                case 0:
                    puts("Voto Branco");
                    k++;
                    break;
                }
            }
            
        }
    }
    puts("Urna finalizada");
    printf("Votos em Paulo:%d\n",i);
    printf("Votos em Renata:%d\n",j);
    printf("Votos Brancos:%d\n",k);
    printf("Votos Nulos:%d\n",l);
    return 0;
}