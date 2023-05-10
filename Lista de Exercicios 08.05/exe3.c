/******************************************************************************

                            Exe 3

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{ 

    int b, a, vetpar[12], vetimpar[12];
    
    for(b=0; b<12; b++){
        
        printf(" digite um numero: ");
        scanf("%d", &a);
         
        if( a % 2 == 0){
            vetpar[b] = a;
        }
        if ( a % 2 == 1){
            vetimpar[b] = a;
        }
    }
    
    for(b=0; b<12; b++){
        printf(" \n os numeros impares são: %d ", vetimpar[b]); 
    }
    for(b=0; b<12; b++){
        printf(" \n os numeros pares são: %d ", vetpar[b]); 
    }

}
