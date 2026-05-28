#include <stdio.h>

int Matrix(double matriz[2][3]){
    
    // Matriz 2x2 - Crammer Method
    
    int i, j;
    
    printf("\nDigite os valores dos elementos: \n \n");
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    printf("\n***** Saída de Dados *****\n \n");
    
    for(i = 0; i < 2; i++){
        printf("| ");
        for(j = 0; j < 3; j++){
            printf("%8.2lf", matriz[i][j]);
        }
        printf(" |\n");
    }
}

double det(double matriz[2][3]){
    return
    (matriz[0][0] * matriz[1][1]) - 
    (matriz[1][0] * matriz[0][1]);
}



double detX(double matriz[2][3]){
    return
    (matriz[0][2] * matriz[1][1]) -
    (matriz[1][2] * matriz[0][1]);
    
}



double detY(double matriz[2][3]){
    return 
    (matriz[0][0] * matriz[1][2]) - 
    (matriz[1][0] * matriz[0][2]);
    
}



void crammer(double matriz[2][3]){
    
    
    double D = det(matriz);
    
    if(D == 0){
        printf("Sistema sem solução única. \n");
        return;
    }
    
    double x = detX(matriz) / D;
    double y = detY(matriz) / D;
    
    printf("\n A solução para o sistema é \n \n");
    printf("x= %.2lf\n", x);
    printf("y= %.2lf\n", y);
    
}


int main(void){
    
    double matriz[2][3];
    
    Matrix(matriz);
    
    crammer(matriz);
    
    return 0;
}