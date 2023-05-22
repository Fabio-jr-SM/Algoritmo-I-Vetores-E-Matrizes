/******************************************************************************

                            Exercicio 11

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int vetor1[5]={6,6,3,4,0},vetor2[5]={6,7,8,9,0},result[5];
    int i,j,k=0;
    
    printf("vetor soma:\n");
    for(i=0;i<5;i++){
        result[i]=vetor1[i]+vetor2[i];
        printf("%d ",result[i]);
    }
    
    printf("\n\nvetor Multiplicacao:\n");
    for(i=0;i<5;i++){
        result[i]=vetor1[i]*vetor2[i];
        printf("%d ",result[i]);
    }
    
    printf("\n\nvetor Diferenca:\n");
    for(i=0;i<5;i++){
        result[i]=vetor1[i]-vetor2[i];
        printf("%d ",result[i]);
    }
    
    printf("\n\nvetor Intercecao:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(vetor1[i]==vetor2[j]){
                
                result[k]=vetor1[i];
                j=5;
                k++;
                printf("%d ",result[i]);
            }
        }
    }
    
    printf("\n\nvetor Uniao:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(vetor1[i]==vetor2[j]){
                
                result[k]=vetor1[i];
                j=5;
                k++;
                printf("%d ",result[i]);
            }
        }
    }
}
