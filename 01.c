#include <stdio.h>
#include <math.h>

int main() {

    int num1, num2;
    int op;

    scanf("Type the first number: ", num1);
    printf("%d", &num1);

    scanf("Type the second number: ", num2);
    printf("%d", &num2);

    printf("Choose the operator do you want: %d", op);
    scanf("%d", &op);

    if(op == '+'){
        printf(num1 + num2);
    } else if(op == '-'){
        printf(num1 - num2);
    } else if(op == '*'){
        printf(num1 * num2);
    } else if(op == '/'){
        printf(num1 / num2);
    } else{
        print('Invalid Number!');
    }

    return 0;
}