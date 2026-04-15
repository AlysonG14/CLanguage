#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;

    printf('Type the coefficient A: %d', &a);
    scanf('%d', a);

    printf('Type the coefficient B: %d', &b);
    scanf('%d', b);

    printf('Type the coefficient C: %d', &c);
    scanf('%d', c);

    float list[2];

    int command = 0;
    int grau = 0;

    while (command == 0){
        for(int x = 0; x += 0.1; x++){
            printf('Type the coefficient: %d', &x);
            scanf('%f', &list[x]);
            grau = list[2] * pow(2, x) + list[1] * pow(1, x) + list[0] * pow(0, x);
        }
    }

    return 0; 
}