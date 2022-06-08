#include <stdio.h>

int main()
{
//compute range of char, short, int, and long    
    
    long max, add, tmax;
    max = 1;
    add = 1;
    tmax = 0;

    while(max > 0 && tmax != max)
    {
        tmax = max;
        add = add << 1;
        max +=  add;
    }
    printf("Max:");
    printf("%ld", tmax);
    printf(" Min:");
    printf("%ld", add);
    printf(" Max Unsigned:");
    printf("%ul", tmax + -1 * add);
    printf("\n");
}

