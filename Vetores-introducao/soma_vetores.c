/******************************************************************************

                            Soma Vetores

*******************************************************************************/

#include <stdio.h>

int main()
{
    int v[10];
    int soma=0;
    
    for(int i=0;i<5;i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&v[i]);
        
        soma = soma + v[i];
    }
    
    printf("A soma é: %d",soma);
}
