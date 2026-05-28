#include <stdio.h>

// Matriz 3x3 - Crammer Method

void Matrix(double matriz[3][4]){
    
    int i, j;
    
    printf("\n Digite os elementos dos valores: \n \n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    printf("\n ***** Saída de Dados *****\n \n");
    
    for(i = 0; i < 3; i++){
        printf("| ");
        for(j = 0; j < 4; j++){
            printf("%8.2lf", matriz[i][j]);
        }
        printf(" |\n");
    }
}


double det(double matriz[3][4]){
    return
    matriz[0][0] * (matriz[1][1]*matriz[2][2] - matriz[1][2]*matriz[2][1])
    -
    matriz[0][1] * (matriz[1][0]*matriz[2][2] - matriz[1][2]*matriz[2][0])
    +
    matriz[0][2] * (matriz[1][0]*matriz[2][1] - matriz[1][1]*matriz[2][0]);
    
}

double detX(double matriz[3][4]){
    return
    matriz[0][3] * (matriz[1][1]*matriz[2][2] - matriz[1][2]*matriz[2][1])
    -
    matriz[0][1] * (matriz[1][3]*matriz[2][2] - matriz[1][2]*matriz[2][3])
    +
    matriz[0][2] * (matriz[1][3]*matriz[2][1] - matriz[1][1]*matriz[2][3]);
    
}

double detY(double matriz[3][4]){
    return
    matriz[0][0] * (matriz[1][3]*matriz[2][2] - matriz[1][2]*matriz[2][3])
    -
    matriz[0][3] * (matriz[1][0]*matriz[2][2] - matriz[1][2]*matriz[2][0])
    +
    matriz[0][2] * (matriz[1][0]*matriz[2][3] - matriz[1][3]*matriz[2][0]);
}

double detZ(double matriz[3][4]){
    return
    matriz[0][0] * (matriz[1][1]*matriz[2][3] - matriz[1][3]*matriz[2][1])
    -
    matriz[0][1] * (matriz[1][0]*matriz[2][3] - matriz[1][3]*matriz[2][0])
    +
    matriz[0][3] * (matriz[1][0]*matriz[2][1] - matriz[1][1]*matriz[2][0]);
}
    


void crammer(double matriz[3][4]){
    
    double D = det(matriz);
    
    if(D == 0){
        printf("Sistema sem solução única. \n");
        return;
    }
    
    double x = detX(matriz) / D;
    double y = detY(matriz) / D;
    double z = detZ(matriz) / D;
    
    printf("\n A solução para o sistema é: \n \n");
    
    
    printf("x= %.2lf\n", x);
    printf("y= %.2lf\n", y);
    printf("z= %.2lf\n", z);
}

int main(void){
    
    double matriz[3][4];
    
    Matrix(matriz);
    
    crammer(matriz);
    
    return 0;
}

