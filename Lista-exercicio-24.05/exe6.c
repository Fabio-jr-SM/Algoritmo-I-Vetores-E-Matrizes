/******************************************************************************

                            Exe 6

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int linha = 4;
    int coluna = 4;
    int matriz[linha][coluna],i,j,vetor[linha],newMatriz[linha][coluna];
    

    //Preenchendo matriz com valores aleatorios
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz[i][j]=rand()%5;
        }  
    }
    
    for(i=0;i<linha;i++){
        vetor[i]=rand()%5;
    }
    
    
    //imprimindo a matriz original
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d  ", matriz[i][j]);
        }  
        printf("\n");
    }
    
    printf("\n");
    //imprimindo a vetor 
    for(i=0;i<linha;i++){
        printf("%d  ", vetor[i]);
    }
    
    printf("\n\nMultiplcação do vetor pela linha:\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            newMatriz[i][j]=matriz[i][j]*vetor[i];
            printf("%d  ", newMatriz[i][j]);
        }  
        printf("\n");
    }
    
    
    printf("\nSubtração do vetor pela coluna:\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            newMatriz[i][j]=matriz[j][i]-vetor[i];
            printf("%d  ", newMatriz[i][j]);
        }  
        printf("\n");
    }
    
    return 0;
}
