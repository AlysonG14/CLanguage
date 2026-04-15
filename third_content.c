#include <stdio.h>
#include <math.h>

int main()
{
    
    // If you want to add C a char character and plus with another number, the result is concenate
    // IF you change the data type value of C "char" to "int" but with %d and %c, the result is bugged
    char a[];
    int c;

    
    a = 11;
    b = 20;
    c = (a) + (b);

    printf("%c\n", a);
    printf("%c\n", b);
    printf("%d\n", c);

    printf("%s", a)

    return 0;
}