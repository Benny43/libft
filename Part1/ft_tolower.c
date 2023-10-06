#include <stdio.h>

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return (c + 32);
    return(c);
}

int main(void)
{
    char uppercaseChar = 'A';
    char lowercaseChar = ft_tolower(uppercaseChar);

    printf("Original character: %c\n", uppercaseChar);
    printf("Lower character: %c\n", lowercaseChar);

    return 0;
}