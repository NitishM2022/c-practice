#include <stdio.h>
#define len 10
int squeeze(char s1[], char s2[]);
int strlen(char s[]);

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

    int print = squeeze(s1, s2);
    printf("%d", print);
}

int squeeze(char s1[], char s2[])
{
    for(int i = 0; i < strlen(s1); i++)
    {
        for(int j = 0; j < strlen(s2); j++)
        {
            if(s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}

int strlen(char s[])
{
    for(int i = 0; i < len; i++)
    {
        if(s[i] <= 8)
        {
            return i;
        }
    }
    return 0;
}