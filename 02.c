#include <stdio.h>
#include <math.h>

int sum(int a, int b){
    return a + b;
}

void error(){
    printf("Error");
}


int main(){
  int aux;
  aux = sum(1,2);
  printf("%d", aux);
  pow(1,2);
  
  return 0;
}