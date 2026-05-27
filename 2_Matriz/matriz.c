#include <stdio.h>
#include <math.h>

int main(void){
    
    // Matriz 3x3
    
    int matriz[2][3];
    int i, j;
    detX, detY, detZ;
    
    printf("\n Digite os valores do elemento: \n \n");
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("\n Elemento[%d][%d] = ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n ***** Saída de Dados ***** \n \n");
    
    for(i = 0; i < 2; i++){
        printf("| ");
        for(j = 0; j < 3; j++){
            printf("%d | %d", matriz[i][j]);
        }
        printf(" |\n");
    }
    
    int escolheDeterminante;
    
    if(escolheDeterminante == "Dx"){
        matriz[0][2] * matriz[1][1] - matriz[0][1] * matriz[1][2];
        
    } else if(escolheDeterminante == "Dy"){
        matriz[0][0] * matriz[1][2] - matriz[0][2] * matriz[1][0];
        
    } else if(escolheDeterminante == "Dz"){
        matriz[0][0] * Matriz[1][1] - matriz[0][1] * matriz[1][0];
        
    }
    
    // Matriz 2x2
    
    
    
    return 0;
}