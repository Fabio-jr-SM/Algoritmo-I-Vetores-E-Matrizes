/******************************************************************************

                            Exercicio 5

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num[6],somaPar=0;
    int i ,cont=0;
    
    printf("vetor Digitado:\n");
    for(i=0;i<6;i++){
        num[i]= rand()%10;
        printf("%d  ",num[i]);
    }
    
    
    printf("\n\nNumeros pares: ");
    for(i=0;i<6;i++){
        if(num[i]%2==0){
            printf("%d ",num[i]);
            somaPar=somaPar+num[i];
        }
    }
    printf("\n\nSoma numeros pares: %d",somaPar);
    
    printf("\n\nNumeros Impares: ");
    for(i=0;i<6;i++){
        if(num[i]%2!=0){
            printf("%d ",num[i]);
            cont++;
        }
    }
    printf("\n\nQuantidade de numeros pares: %d",cont);
}
