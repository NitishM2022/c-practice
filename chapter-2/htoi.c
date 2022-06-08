#include <stdio.h>
int htoi(char hex[]);

int main()
{
    char hex[3] = {getchar(), getchar(), getchar()};
    printf("%d", htoi(hex));
}

int htoi(char hex[]) 
{
    int hundred = hex[0] - 48;
    int ten = hex[1] - 48;
    int one = hex[2] - 48;
    return hundred*16*16 + ten*16 + one;
} 