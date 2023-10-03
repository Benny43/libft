#include <stdlib.h>
#include <stdio.h>

static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

char *ft_strdup(char *str)
{
    int c;
    char *strdup;
    int sln;

    c = 0;
    sln = ft_strlen(str);
    strdup = (char *)malloc(sln + 1);
    if (strdup == NULL)
    {
        printf("Memory allocation error");
        exit;
    }
    while(str[c] != '\0')
    {
        strdup[c] = str[c];
        c++;
    }
    strdup[sln] = '\0';
    return(strdup);
}

int main(void)
{
    char src[] = "Hello World";
    char *dup = NULL;

    printf("Antes -\nsrc:%s\ndup:%s\n", src, dup);
    dup = ft_strdup(src);
    printf("Depois -\nsrc:%s\ndup:%s\n", src, dup);
    free(dup);
}