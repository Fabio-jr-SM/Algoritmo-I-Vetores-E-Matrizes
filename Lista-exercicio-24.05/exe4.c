/******************************************************************************

                            Exe 4

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int linha = 3;
    int coluna = 3;
    int matriz[linha][coluna],i,j,maiorV[linha],maiorVL=0,cont=0;
    
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz[i][j]=rand()%5;
            printf("%d  ", matriz[i][j]);
        }  
        printf("\n");
    }
    
    
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(matriz[i][j]>maiorVL){
                maiorVL=matriz[i][j];
            }
        }
        maiorV[i]=maiorVL;
        maiorVL=0;
    }
    
    printf("\nValores maiores de cada da linha:\n");
    for(i=0;i<linha;i++){
        printf("%d ",maiorV[i]);
    }
    
    printf("\n\nMultiplcação de cada linha pelo maior valor da linha:\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d  ", matriz[i][j]*maiorV[i]);
        }  
        printf("\n");
    }
    
    return 0;
}
