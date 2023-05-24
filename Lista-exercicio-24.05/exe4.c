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
    int matriz[linha][coluna],i,j,maiorV[linha],maiorVL=0,cont=0,newMatriz[linha][coluna];
    

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
    
    //verificando os valores maiores em cada linha
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(matriz[i][j]>maiorVL){
                maiorVL=matriz[i][j];
            }
        }
        maiorV[i]=maiorVL;
        maiorVL=0;
    }
    
    //imprimindo os valores maiores em cada linha
    printf("\nValores maiores de cada da linha:\n");
    for(i=0;i<linha;i++){
        printf("%d ",maiorV[i]);
    }
    
    
    //multiplicando os valores maiores em cada linha
    printf("\n\nMultiplcação de cada linha pelo maior valor da linha:\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            newMatriz[i][j]=matriz[i][j]*maiorV[i];
            printf("%d  ", newMatriz[i][j]);
        }  
        printf("\n");
    }
    
    
    maiorVL=0;
    int maiorVC[coluna];
    //verificando os valores maiores em cada coluna
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(newMatriz[j][i]>maiorVL){
                maiorVL=newMatriz[j][i];
            }
        }
        maiorVC[i]=maiorVL;
        maiorVL=0;
    }
    
    //imprimindo os valores maiores em cada coluna
    printf("\nValores maiores de cada da coluna:\n");
    for(i=0;i<coluna;i++){
        printf("%d ",maiorVC[i]);
    }
    
    //Somando os valores maiores de cada coluna pela coluna
    printf("\n\nSomando valores maiores de cada coluna pela coluna:\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            newMatriz[i][j]=newMatriz[i][j]+maiorVC[i];
            printf("%d  ", newMatriz[i][j]);
        }  
        printf("\n");
    }
    
    return 0;
}
