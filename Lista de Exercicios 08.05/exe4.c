/******************************************************************************

                            Exe 4

*******************************************************************************/

#include <stdio.h>

int main()
{

    int n, num[10], a, cont,j=0,k=0;
    int somaPar,subImpar;


    for(n=0;n<10;n++){
        printf("digite o %d numero: ", n+1);
        scanf("%d", &num[n]);
        
        if(num[n] % 2 == 0){
            somaPar=somaPar+num[n];
        } else{
            subImpar=subImpar-num[n];
        }
    }
    
    
    printf("Vetor digitado: \n");
    for(n=0;n<10;n++){
        printf("%d  ",num[n]);
    }
    
    printf("\nSoma dos numeros na posicao par: %d \n",somaPar);
    printf("Subtração dos demais numeros: %d \n",subImpar);

}
