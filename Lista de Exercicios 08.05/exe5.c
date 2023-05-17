/******************************************************************************

                            Exercicio 5

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num[6];
    int i,k=0;
    
    printf("vetor Digitado:\n");
    for(i=0;i<6;i++){
        num[i]= rand()%10;
        printf("%d  ",num[i]);
    }
    
    
    printf("\n\nNumeros pares:\n");
    for(i=0;i<6;i++){
        if(num[i]%2==0){
            printf("%d ",num[i]);
            k++;
        }
    }
}
