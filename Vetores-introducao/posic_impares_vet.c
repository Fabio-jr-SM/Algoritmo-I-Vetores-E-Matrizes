/******************************************************************************

                imprimir as posições numeros impares em um Vetores

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int v[10];
    int mult_pares=0;
    
    for(int i=0;i<5;i++){
        v[i] = rand() % 100;
    }
    
    for(int i=0;i<5;i++){
       if(i%2==0){
           printf("%d \n",v[i]);
       } 
    }
}
