#include <stdio.h>
#define N 8

int main()
{
    int c;
    int nc = 0;
    while((c = getchar()) != '\n')
    {
        ++nc;
        if(c == ' ')
        {  
            int count = 1;
            while((c = getchar()) == ' ')
            {
                count++;
            }
            
            int len = N-(--nc)%N;

            if(len > count)
            {
                for(int i = 0; i < count; i++)
                {
                    putchar(' ');
                    nc++;
                }
            }else
            {
                while(count > len)
                {
                    putchar('\t');
                    nc += len;
                    count -= len;
                    len = N-(nc)%N;
                }

                for(int i = 0; i < count; i++)
                {
                    putchar(' ');
                }
            }
            
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
