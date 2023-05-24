/******************************************************************************

                            Exe 1

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3],i,j;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=rand()%10;
            printf("%d  ", matriz[i][j]);
        }  
        printf("\n");
    }
    printf("\n\n");
    for (i = 3-1; i >=0; i--) {
        printf("%d ", matriz[i][(2)-i]);
    }
    return 0;
}
