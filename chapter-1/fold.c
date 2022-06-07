#include <stdio.h>
#define N 5
#define S 8
#define MAX_LINE 1000

int main()
{
    char currWord[MAX_LINE];
    char line[MAX_LINE];
    int nc = 0;
    int c = 0;

    while((c = getchar()) != '\n')
    {
        nc++;
        if(c == '\t')
        {
            int count = 0;
            int run = S-(--nc)%S;
            for(int i = 0; i < run; i++)
            {
                count++;
                line[nc+count-1] = ' ';
            }
            nc = nc+count;
        }
        else
        {
            line[nc-1] = c;
        }
    }
    nc++;
    
    int pos = 0;
    int wordLength = 0;

    for(int i = 0; i < nc; i++)
    {
        if(line[i] <= 8)
        {
            continue;
        }
        
        if(line[i] == ' ')
        {
            if(wordLength > 0 && (wordLength + pos) >= N)
            {
                putchar('\n');
                pos = 0;
                wordLength = 0;
            }
            else
            {
                if(wordLength > 0)
                {
                    putchar(' ');
                    wordLength++;
                }
                else
                {
                    pos++;
                }
            }
        }
        else
        {
            if(wordLength >= N)
            {
                putchar('-');
                putchar('\n');
                pos = 0;
                wordLength = 0;
            }
            putchar(line[i]);
            wordLength++;
        }
    }
}