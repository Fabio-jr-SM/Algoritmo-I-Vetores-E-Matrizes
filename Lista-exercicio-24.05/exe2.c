/******************************************************************************

                            Exe 2

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int matriz[3][4],i,j;
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            matriz[i][j]=(rand()%199)-100;
            printf("%d  ", matriz[i][j]);
        }  
        printf("\n");
    }
    
    printf("\n\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j]<0){
                matriz[i][j]=0;
                printf("%d  ", matriz[i][j]);
            }else{
                printf("%d  ", matriz[i][j]);
            }
        }  
        printf("\n");
    }
    return 0;
}
