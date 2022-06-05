#include <stdio.h>
# define N 4

int main()
{
    int c, nc;
    nc = 0;
    while((c = getchar()) != '\n')
    {
        ++nc;
        if(c == '\t')
        {  
            int count = 0;
            int run = N-(--nc)%N;
            for(int i = 0; i < run; i++)
            {
                count++;
                putchar('I');
            }
            nc = nc+count;
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
//    1234    123