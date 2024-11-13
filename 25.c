#include <stdio.h>

int main(){
    double pi,resultado;
    for (int i = 0; i <= 5 ; i++)
    {
        switch (i)
        {
        case 0:
            pi = 4;
            printf("Valor de pi:%0.1lf\n",pi);
            break;
        case 1:
            pi = 4 - (4/3);
            printf("Valor de pi:%0.1lf\n",pi);
            break;
        case 2:
            pi = 4 - (4/3) + (4/5);
            printf("Valor de pi:%0.1lf\n",pi);
            break;
        case 3:
            pi = 4 - (4/3) + (4/5) - (4/7);
            printf("Valor de pi:%0.1lf\n",pi);
            break;
        case 4:
            pi = 4 - (4/3) + (4/5) - (4/7) + (4/9);
            printf("Valor de pi:%0.1lf\n",pi);
            break;
        case 5:
            pi = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11);
            printf("Valor de pi:%0.1lf\n",pi);
            break;
        }
    }
    return 0;
}