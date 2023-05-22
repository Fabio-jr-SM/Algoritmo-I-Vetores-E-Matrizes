# Algoritmo I

## Vetores em Portugues estruturado

```c
/******************************************************************************
 
Autor: Fabio Junior Senna Moura
Curso: Engenharia de Computacao
Disciplina: Algoritmos I

*******************************************************************************/


#include <stdio.h>

int main() 
{ 
   int matriz[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };  
  int opcao;
  int rotacao[3][3]; 


  printf("Matriz Original\n"); 
  for (int i = 0; i < 3; i++) 
  { 
     for (int j = 0; j < 3; j++) 
        printf("%d ", matriz[i][j]); 
     printf("\n"); 
  } 

  printf("\nRotacoes:\n");
  printf("1 - Rotacao 90\n");
  printf("2 - Rotacao 180\n");
  printf("3 - Rotacao 270\n");
  printf("4 - Rotacao 360\n");
  scanf("%d", &opcao);

  switch(opcao)
  {
    case 1:
        
        printf("\nMatriz após rotacao de 90 graus\n"); 
        for (int i = 0; i < 3; i++) { 
          for (int j = 0; j < 3; j++){
            rotacao[i][j] = matriz[2-j][i]; 
            printf("%d ", rotacao[i][j]); 
          } 
          printf("\n"); 
        } 
    break;

    case 2:

        printf("\nMatriz após rotacao de 180 graus\n"); 
        for (int i = 0; i < 3; i++) { 
            for (int j = 0; j < 3; j++){
                rotacao[i][j] = matriz[2-i][2-j]; 
                printf("%d ", rotacao[i][j]); 
            } 
            printf("\n"); 
        } 
    break;

    case 3:

        printf("\nMatriz após rotacao de 270 graus\n"); 
        for (int i = 0; i < 3; i++){ 
            for (int j = 0; j < 3; j++){
                rotacao[i][j] = matriz[j][2-i]; 
                printf("%d ", rotacao[i][j]); 
            } 
            printf("\n"); 
        } 
    break;
  
    case 4:
        printf("\nMatriz após rotacao de 360 graus\n"); 
            for (int i = 0; i < 3; i++) { 
                for (int j = 0; j < 3; j++){
                    printf("%d ", matriz[i][j]); 
                } 
            printf("\n"); 
        } 
    break;

    defult:
      printf("Opcao nao existe!\n");
  }
    
  return 0; 
}

```
