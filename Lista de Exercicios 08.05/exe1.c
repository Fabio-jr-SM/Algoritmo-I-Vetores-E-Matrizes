/******************************************************************************

                            Exercicio 1

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float nota[100],soma_notas=0,media;
    int total,i;
    
    printf("Digite o tamanho da turma: ");
    scanf("%d",&total);
    
    for(i=0;i<total;i++){
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%f",&nota[i]);
        soma_notas=nota[i]+soma_notas;
    }
    
    media=soma_notas/total;
    
    printf("A media das notas: %3.f",media);

}
