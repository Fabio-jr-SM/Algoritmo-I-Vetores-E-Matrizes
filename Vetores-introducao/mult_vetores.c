/******************************************************************************

                            multiplicação dos numeros pares em um Vetores

*******************************************************************************/

#include <stdio.h>

int main()
{
    int v[10];
    int mult_pares=0;
    
    for(int i=0;i<5;i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&v[i]);
        
        mult_pares = mult_pares * v[i];
    }
    
    printf("A soma é: %d",mult_pares);
}
