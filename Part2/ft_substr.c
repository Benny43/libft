/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:49:54 by benny             #+#    #+#             */
/*   Updated: 2023/10/06 02:15:49 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// creates a substring from a big string to a max length of len 
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	char *substr;

	substr = (char *)malloc(len - start + 1);
	if(!substr)
		return NULL;
	i = 0;
	while(s[start] && i < len - start)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return substr;
}

int main(void)
{
	char * s = ft_substr("tripouille", 0, 42000);

	printf("%s\n", s);
}