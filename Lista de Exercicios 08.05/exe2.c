/******************************************************************************

                            Exercicio 2

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float nota[15],maior_nota=0, menor_nota=10;
    int i;
    
    for(i=0;i<15;i++){
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%f",&nota[i]);
        
        if(nota[i]>maior_nota){
            maior_nota=nota[i];
        }
        
        if(nota[i]<menor_nota){
            menor_nota=nota[i];
        }
    }
    
    printf("A maior nota é: %2.f \n",maior_nota);
    printf("A menor nota é: %2.f \n",menor_nota);
}
