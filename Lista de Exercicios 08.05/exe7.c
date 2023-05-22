/******************************************************************************

                            Exercicio 7

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int vetor[10],num;
    int i ,cont=0,k=0;
    
    printf("vetor Digitado:\n");
    for(i=0;i<10;i++){
        vetor[i]= rand()%10;
        printf("%d  ",vetor[i]);
    }
    
    printf("\n\nDigite um numero: ");
    scanf("%d",&num);
    
    for(i=0;i<10;i++){
        if(vetor[i]==num){
            printf("O numero digitado se encontra na posição: %d \n",i);
        }
    }
}
