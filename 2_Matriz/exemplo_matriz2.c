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
    
    printf("Digite os valores do determinante X: \n");
   
    for(detX = 0; detX < 3; detX++){
        printf("Valor X[%d] = ", detX);
        scanf("%d", &matriz[detX]);
    }
    
    int detX, detY, detZ;
    int D[] = {0, 1, -2};
    int Dx, Dy, Dz;
   
    printf("Digite os valores do determinante Y: \n");
   
    for(detY = 0; detY < 3; detY++){
        printf("Valor Y[%d] = ", detY);
        scanf("%d", &matriz[detY]);
    }
   
    printf("Digite os valores do determinante Z: \n");
   
    for(detZ = 0; detZ < 3; detZ++){
        printf("Valor Z[%d] = ", detZ);
        scanf("%d", &matriz[detZ]);
    }
    
    int escolhaDeterminante;
   
   
    printf("Escolha o determinante: (Dx, Dy, Dz) = ");
    scanf("%d", &escolhaDeterminante);  
   
    if(escolhaDeterminante == "Dx"){
        // D + detY + detZ;


        for(detY; detY < 3; detY++){
            for(detZ; detZ < 3; detZ++){
                printf("Dx = %d ", matriz[detY][detZ]);
                

            }
        }
       
       
    } else if(escolhaDeterminante == "Dy"){
        // detX + D + detZ;
       
        for(detX; detX < 3; detX++){
            for(detZ; detZ < 3; detZ++){
                printf("Dy = %d", matriz[detX][detY]);
                
            }
        }
       
    } else if(escolhaDeterminante == "Dz"){
        // detX + detY + D;
       
        for(detX; detX <3; detX++){
            for(detY; detY <3; detY++){
                printf("Dz = %d", matriz[detX][detY]);
                
            }
        }
       
    }
}