/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha,coluna,i,j,cont=0,somacolun1=0,somaDiagoP=0,somaDiagoS=0;
		
		printf("Digite a ordem da matriz[linha,coluna]: ");
		scanf("%d %d",&linha,&coluna);
		
		int matriz[linha][coluna];
        
        for(i=0;i<linha;i++){
			for(j=0;j<coluna;j++){
		        matriz[i][j]= rand()%10;
			}
        }
          
          
        int k=i-j; 
        
		for(i=0;i<linha;i++){
			for(j=0;j<coluna;j++){
				if(j==0){
					somacolun1=somacolun1+matriz[i][j];
				}
				
				if(i==j){
				    somaDiagoP=somaDiagoP+matriz[i][j];
				}
				
				if(i+j==k){
				    somaDiagoS=somaDiagoS+matriz[i][j];
				}
			}
		}
		
		for(i=0;i<linha;i++){
		    printf("\nLinha: %d: ",i);
			for(j=0;j<coluna;j++){
			    printf("%d | ",matriz[i][j]);
			}
		}

		printf("\n\n\nSoma da Primeira coluna: %d",somacolun1);
		printf("\nSoma da Diagonal principal: %d",somaDiagoP);
		printf("\nSoma da Diagonal secundaria: %d",somaDiagoS);
}
