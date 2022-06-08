#include <stdio.h>
#define len 10
void squeeze(char s1[], char s2[]);

int main()
{
    int c;
    int n = 0;
    int m = 0;
    char s1[len];
    char s2[len];

    while((c = getchar()) != ' ')
    {
        s1[n] = c;
        n++;
    }

    while((c = getchar()) != '\n')
    {
        s2[m] = c;
        m++;
    }

    squeeze(s1, s2);
    for(int i = 0; i < len; i++)
    {
        if(s1[i] == 0)
        {
            continue;
        }
        else
        {
            putchar(s1[i]);
        }
    }
}

void squeeze(char s1[], char s2[])
{
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(s1[i] == s2[j])
            {
                s1[i] = 0;
            }
        }
    }
}