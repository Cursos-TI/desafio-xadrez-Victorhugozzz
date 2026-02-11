#include <stdio.h>
int main(){
int bispo,torre,rainha,cavalo, cavalo2;

        printf("*** Jogo de xadres ***");
        printf("\n");

        printf("O movimento da TORRE foi: \n");
        for(torre = 1 ; torre <= 5; torre++)
        {
            printf("DIREITA\n");
        }
        printf("\n");
        printf("O movimento do bispo foi: \n");

        for(bispo = 1; bispo <=5; bispo++ )
        {
            for(bispo = 1;bispo <=5; bispo++){
                printf("CIMA,DIREITA\n");
            }
        }
        printf("\n");
        printf("O movimento da rainha foi: \n");
        for(rainha = 1; rainha <= 8 ; rainha++ )
        {
            printf("ESQUERDA\n");
        }
        printf("\n");
        printf("O movimento do cavalo foi: \n");
        for(cavalo = 1; cavalo <=2; cavalo ++)
        {
           while(cavalo <=1 )
           {
            printf("BAIXO \n");
            printf("BAIXO\n");
            printf("ESQUERDA \n");
            cavalo ++;
           }
        }



    return 0;

}