#include <stdio.h>
#define lim 30

int main()
{
    int i, c;
    char line[lim];

    for(i = 0; i < lim-1; i++)
    {
        if((c = getchar()) != '\n')
        {
            if(c != EOF)
            {
                line[i] = c;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    line[i] = '\0';
    printf("%s", line);


    // int j, k;
    // char line2[lim];

    // for(j = 0; j < lim-1 && (k = getchar()) != '\n' && k != EOF; j++)
    // {
    //     line2[j] = k;
    // }
    // line2[j] = '\0';
    // printf("%s", line2);

}