#include <stdio.h>
#include <math.h>

int main(void){
    
    // Matriz Method

    int matriz[3][3], i, j;

    printf("\n Digite os números do elementos: \n \n");

    for(i = 0; i < 3; i++){ // i -> é o indíce da linha da matriz
        for(j = 0; j < 3; j++){ // j -> é o indíce da coluna da matriz
            printf("\n Elementos[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n********Saída de Dados********\n");

    for(i = 0; i < 3; i++){ // i -> é o indíce da linha da matriz
        for(j = 0; j < 3; j++){ // j -> é o indíce da coluna da matriz
            printf("\nElementos[%d][%d] = %d", i, j, matriz[i][j]);
        }
    }

    // Kramer Method

    int detX, detY, detX;


    return 0;
}