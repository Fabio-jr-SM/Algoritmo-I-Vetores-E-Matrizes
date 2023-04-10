/******************************************************************************

                            Soma dos numeros pares em um Vetores

*******************************************************************************/

#include <stdio.h>

int main()
{
    int v[10];
    int soma_pares=0;
    
    for(int i=0;i<5;i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&v[i]);
        
        if(v[i]%2==0){
            soma_pares = soma_pares + v[i];
        }
    }
    
    printf("A soma é: %d",soma_pares);
}
