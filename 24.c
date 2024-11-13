#include <stdio.h>
#include <math.h>

int main(){
    int cateto1,cateto2,hipotenusa,resultado;
    
    for (hipotenusa = 0; hipotenusa < 500; hipotenusa++)
    {
        for (cateto1 = 0; cateto1 < 500; cateto1++)
        {
            for (cateto2 = 0; cateto2 < 500; cateto2++)
            {
                resultado = pow(hipotenusa,2) - (pow(cateto1,2) + pow(cateto2,2));
        
                if (resultado > 0)
                {
                    printf("Valores da tripla:%d\n e %d\n e %d\n",hipotenusa,cateto1,cateto2);
                }
            }
            
        }
    }
}