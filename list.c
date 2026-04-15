#include <stdio.h>
#include <math.h>

int main()
{
    
    // IF you want to add C a char character and plus with another number, the result is concenate
    // IF you change the data type value of C "char" to "int" but with %d and %c, the result is bugged
    char a[7] = {"Github"};
    int c;

    printf("%s\n", a);
    printf("%s\n", a[3]);

    return 0;
}