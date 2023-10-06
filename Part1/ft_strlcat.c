/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:51:06 by benny             #+#    #+#             */
/*   Updated: 2023/10/04 01:17:54 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int ft_strlen(char *str)
{
	int c;

	c = 0;
	while(str[c])
		c++;
	return(c);
}

char *ft_strlcat(char *dst, const char *src, size_t size)
{
	char *tmp_dst;
	char *tmp_src;
	int c;
	int i;
	int dst_len;
	int src_len;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	c = 0;
	dst_len = ft_strlen(tmp_dst);
	src_len = ft_strlen(tmp_src);
	while(tmp_src[c] && dst_len < src_len && i < size)
	{
		tmp_dst[dst_len] = tmp_src[c];
		c++;
		dst_len++;
		i++;
	}
	tmp_dst[dst_len + c] = '\0';
	return (dst);
}

int main (void)
{
	char dest[30] = "OLA"; 
	memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";

	ft_strlcat(dest, src, 6);
	printf("%s\n", dest);
}