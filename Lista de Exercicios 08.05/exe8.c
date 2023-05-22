/******************************************************************************

                            Exercicio 8

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int vetor[100],num;
    int i,maiorN=0,menorN=100;
    
    printf("vetor Digitado:\n");
    for(i=0;i<100;i++){
        vetor[i]= rand()%101;
        printf("%d  ",vetor[i]);
    }
    
    for(i=0;i<100;i++){
        if(vetor[i]>maiorN){
            maiorN=vetor[i];
        }
        if(vetor[i]<menorN){
            menorN=vetor[i];
        }
    }
    
    printf("\nMaior Numero: %d",maiorN);
    printf("\n menor Numero: %d",menorN);
}
