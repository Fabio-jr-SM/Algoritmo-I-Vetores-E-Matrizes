/******************************************************************************

                            Exe 5

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int linha = 4;
    int coluna = 4;
    int matriz[linha][coluna],i,j;
    

    //Preenchendo matriz com valores aleatorios
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz[i][j]=rand()%5;
        }  
    }
    
    //imprimindo a matriz original
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d  ", matriz[i][j]);
        }  
        printf("\n");
    }
    
    //imprimindo a matriz elevqado a 3
    printf("\nMatriz elevado a 3\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(matriz[i][j]<=35){
                matriz[i][j]=pow(matriz[i][j],3);
            }
            printf("%d  ", matriz[i][j]);
        }  
        printf("\n");
    }
    
    //imprimindo a matriz Transposta
    printf("\nMatriz Transposta\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d  ", matriz[j][i]);
        }  
        printf("\n");
    }
    
    return 0;
}
