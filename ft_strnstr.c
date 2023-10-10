/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 02:02:13 by benny             #+#    #+#             */
/*   Updated: 2023/10/10 14:59:03 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	char *big_tmp;
	char *little_tmp;
	size_t j;

	big_tmp = (char *)big;
	little_tmp = (char *)little;
	if (little_tmp == NULL)
		return(big_tmp);

	i = 0;
	while(big_tmp[i] && i < len)
	{
		j = 0;
		while (little_tmp[j] == big_tmp[i + j] && little_tmp[j] && (i + j) < len)
		{
			j++;
			if(little_tmp[j] == '\0')
				return (&big_tmp[i]);
		}			
		i++;
	}
	return(NULL);
}

int main(void)
{
    const char *haystack = "Hello, world! This is a test string.";
    const char *needle = "world";
    size_t max_len = 20;

    const char *result = ft_strnstr(haystack, needle, max_len);

    if (result)
    {
        printf("Found: %c\n", *result);
    }
    else
    {
        printf("Not found.\n");
    }

    return 0;
}