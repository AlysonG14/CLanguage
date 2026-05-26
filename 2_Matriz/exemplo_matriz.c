#include <stdio.h>
#include <math.h>

int main (void){
  
  // int m[3][3] = {10, 20, 25, 30, 40, 45, 50, 60, 70}; // normal
  int m[3][3] = {{10, 20, 25}, {30, 40, 45}, {50, 60, 70}}; // columns + keys
  
  printf("Valor da linha 0, coluna 0 = %d \n", m[0][0]);
  printf("Valor da linha 0, coluna 1 = %d \n", m[0][1]);
  printf("Valor da linha 0, coluna 2 = %d \n", m[0][2]);
  
  printf("\nValor da linha 1, coluna 0 = %d \n", m[1][0]);
  printf("Valor da linha 1, coluna 1 = %d \n", m[1][1]);
  printf("Valor da linha 1, coluna 2 = %d \n", m[1][2]);
  
  printf("\nValor da linha 2, coluna 0 = %d \n", m[2][0]);
  printf("Valor da linha 2, coluna 1 = %d \n", m[2][1]);
  printf("Valor da linha 2, coluna 2 = %d \n", m[2][2]);
  
  return 0;
}