/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcatNF.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:51:06 by benny             #+#    #+#             */
/*   Updated: 2023/10/10 14:47:25 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*tmp_dst;
	int		c;
	int		i;
	int		dst_len;
	int		src_len;

	tmp_dst = (char *)dst;
	c = 0;
	dst_len = ft_strlen(tmp_dst);
	while (src[c] && dst_len < src_len && i < size)
	{
		tmp_dst[dst_len] = src[c];
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