#include <stdio.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        return(c - 32);
    return(c);
}

int main(void)
{
    char lowercaseChar = 'a';
    char uppercaseChar = ft_toupper(lowercaseChar);

    printf("Original character: %c\n", lowercaseChar);
    printf("Uppercase character: %c\n", uppercaseChar);

    return 0;
}