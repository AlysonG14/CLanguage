#include <stdio.h>
#include <math.h>

int main(void){


    // ********** Matriz Method ***********
  
  int matriz[3][3], i, j;
  
  printf("\nDigite os valores do elementos: \n \n");
  
  for(i = 0; i < 3; i++){ // i -> é o indíce da linha da matriz
    for(j = 0; j < 3; j++){ // j -> é o indíce da coluna da matriz
      
        printf("\nElemento[%d][%d] = ", i, j);
        scanf("%d", &matriz[i][j]);
    }
  }
  
  printf("\n\n******** Saída de Dados *********\n\n");
  
  for(i = 0; i < 3; i++){ // i -> é o indíce da linha da matriz
    for(j = 0; j < 3; j++){ // j -> é o indíce da coluna da matriz
      printf("\nElemento[%d][%d] = %d", i, j, matriz[i][j]);
    }
  }

  // ********** Kramer Method ***********
  
  
  
  return 0;
}