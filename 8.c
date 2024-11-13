#include <stdio.h>

int main(){
    int mercadoria,prestacao,entrada;
    puts("Valor do produto:");
    scanf("%d",&mercadoria);
    for (int i = 0; i < mercadoria; i++)
    {
        if (entrada >= prestacao && entrada < mercadoria)
        {
            entrada = mercadoria - ( 2 * prestacao);
            prestacao = (mercadoria - entrada) / 2;
        }
        
    }
    printf("Valor da prestacao:%d\n",prestacao);
    printf("Valor da entrada:%d\n",entrada);
    return 0;
}