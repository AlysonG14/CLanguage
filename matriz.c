#include <stdio.h>
#include <math.h>

int main(){
    
    int n, i, j;
    scanf("%d", &n);
    float M[n][n], S[n],detA,detX,detY,detZ;
    
    for(i = 0; i < n; i++){
        for(j=0; j < n; j++){
            scanf("%.1f", &M[i][j]);
        }
    }
    
    for(i = 0; i < n; i++){
        for(j=0; j < n; j++){
            scanf("%f", &M[i][j]);
        }
        printf("%f",S[i]);
        printf("\n");
    }
    
    if(n==2){
        detA = (M[0][0]*M[1][1])-(M[0][1]*M[1][0]);
        detX = (M[0][0]*M[1][1])-(M[0][1]*M[1][0]);
        detY = (M[0][0]*M[1][1])-(M[0][1]*M[1][0]);
        
        X = detX/detA;
        Y = detY/detA;
        
    }
    
    return 0;
}