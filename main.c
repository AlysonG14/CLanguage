#include <stdio.h>
#include <math.h>

int main(){

    int command = 0;
    while(command <= 10){
        printf("Number: %f",command);
        command++;
    }

    int command1 = 0, grau = 2;
    float list[2], func;
    float list1[3], func1;
    while (command1 == 0){
        printf("Type the values of coefficients of equations of 2° degree of sequence ");
        for(int i = 0; i <= grau; i++){
            printf("Type the coefficient of degree %d\n ",i);
            scanf("%f\n", &list[i]);
            
        }
        for(float i = -100; i <= 100; i+= 0.01){
            func = list[2] * pow(i, 2) + list[1] * pow(i, 1) + list[0] * pow(i, 0);
            func1 = list1[3] * pow(i, 3) + list1[2] * pow(i, 2) + list1[1] * pow(i, 1) + list1[0] * pow(i, 0);
            if(func >= 0 && func < 0.1){
                printf("A root can %f \n",i);
            }
            else if(func1 >= 0 && func1 < 0.1){
                printf("A root can %f \n", i);
            }
        }
        printf("Do you want to continue? Yes (0) - No (1)");
        scanf("%d\n", &command1);
    }

    printf("dlrow olleH");


    return 0;
}