#include <stdio.h>

void TORRE(int casas){
    if(casas > 0){
        printf("DIREITA \n");
        TORRE(casas - 1);
    }
}
void RAINHA(int casas){
    if(casas > 0){
        printf("ESQUERDA \n");
        RAINHA(casas - 1);
    }
}
void BISPO1(int BISPO){
    for(BISPO = 1; BISPO <=5; BISPO++ )
        {
            for(BISPO = 1;BISPO <=5; BISPO++){
                printf("CIMA,DIREITA\n");
            }
        }
    }
void CAVALO(int casa){
    while(casa == 1 )
        {
            for( casa = 0; casa <= 1 ; casa ++){
                printf("CIMA\n");
            }
            printf("DIREITA\n");
        }
    }

int main(){
int bispo,torre,rainha,cavalo, cavalo2;

        printf("*** Jogo de xadres ***");
        printf("\n");
        printf("\n");
        
        printf("O movimento da torre foi: \n");
        TORRE(5);
        printf("\n");

        printf("O movimento da torre foi: \n");
        RAINHA(8);
        
        printf("\n");
        printf("O movimento do bispo foi: \n");
        BISPO1(1);

       
      
        printf("\n");
        printf("O movimento do cavalo foi: \n");
        CAVALO(1);



    return 0;

}