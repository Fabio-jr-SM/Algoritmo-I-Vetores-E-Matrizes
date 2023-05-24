/******************************************************************************

                            Exe 3

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int linha = 2;
    int coluna = 2;
    int matriz[linha][coluna],i,j,result=0,cont=0;
    
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz[i][j]=rand()%10;
            printf("%d  ", matriz[i][j]);
            if(matriz[i][j]<0){
                cont;
            }
        }  
        printf("\n");
    }
    
    printf("\nSoma dos elementos coluna impar:");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(j%2!=0){
                result=matriz[i][j]+result;
            }
        }  
    }
    
    
    printf("%d \n",result);
    result=0;
    
    
    printf("\nMedia aritmetica dos elementos coluna par:");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(j%2==0){
                result=matriz[i][j]+result;
            }
        }  
    }
    result=result/linha;
    printf("%d \n",result);
    return 0;
    
    int num=linha*coluna;
    int porcentagem=(cont*100)/num;
    
    printf("porcentagem dos numeros negativos: %d \n",porcentagem);
}
