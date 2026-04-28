#include <stdio.h>
#include <math.h>

int main() {
    int grau, continuar = 1;

    while (continuar == 1) {
        printf("\nEnter the degree of polynomial (0, 1, 2): ");
        scanf("%d", &grau);

        if (grau < 0 || grau > 2) {
            printf("Invalid degree! Try again.\n");
            continue;
        }

        if (grau == 0) {
            float c;
            printf("Enter constant (c): ");
            scanf("%f", &c);

            if (c == 0) {
                printf("Infinite solutions\n");
            } else {
                printf("No solution\n");
            }
        }

        else if (grau == 1) {
            float a, b;
            printf("Enter a and b (ax + b = 0): ");
            scanf("%f %f", &a, &b);

            if (a == 0) {
                printf("Invalid equation (a cannot be 0)\n");
            } else {
                float x = -b / a;
                printf("Root: %.2f\n", x);
            }
        }

        else {
            float a, b, c;
            printf("Enter a, b, c (ax^2 + bx + c = 0): ");
            scanf("%f %f %f", &a, &b, &c);

            if (a == 0) {
                printf("This is not degree 2. Try again.\n");
                continue;
            }

            float delta = b*b - 4*a*c;

            if (delta < 0) {
                printf("No real roots\n");
            } else if (delta == 0) {
                float x = -b / (2*a);
                printf("One root: %.2f\n", x);
            } else {
                float x1 = (-b + sqrt(delta)) / (2*a);
                float x2 = (-b - sqrt(delta)) / (2*a);
                printf("Roots: %.2f and %.2f\n", x1, x2);
            }
        }

        printf("\nDo you want to solve another? (1 = yes, 0 = no): ");
        scanf("%d", &continuar);
    }

    printf("\nProgram finished.\n");
    return 0;
}