/******************************************************************************

                            Exercicio 6

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int vetor1[10],vetor2[10],intersecao[10];
    int i ,cont=0,k=0;
    
    printf("vetores Digitado:\n");
    for(i=0;i<10;i++){
        vetor1[i]= rand()%10;
        printf("%d  ",vetor1[i]);
    }
    printf("\n\n");
    for(i=0;i<10;i++){
        vetor2[i]= rand()%10;
        printf("%d  ",vetor2[i]);
    }
    
    for(i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(vetor1[i]==vetor2[j]){
                
                intersecao[k]=vetor1[i];
                j=10;
                k++;
            }
        }
    }
    
    printf("\n\nvetor intersecao:\n");
    for(i=0;i<k;i++){
        printf("%d  ",intersecao[i]);
    }
    
    
    
}
