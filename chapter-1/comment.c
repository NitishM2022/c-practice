#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if(c == '\\' && (c = getchar()) != EOF && c == '\\')
        {
            while((c = getchar()) != '\n')
            {
                c = getchar();
            }
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }
    
}