/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:57:43 by benny             #+#    #+#             */
/*   Updated: 2023/10/03 20:05:31 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strlcpy(char *dst, const char *src, size_t size)
{
	int c;

	c = 0;
	while(src[c] && (c < size))
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (dst);
}

int main(void)
{
	char src[] = "coucou";
	char dest[10]; 
	memset(dest, 'A', 10);
	ft_strlcpy(dest, src, 3);
	printf("%s\n", dest);
}