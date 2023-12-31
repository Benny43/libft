/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:51:06 by benny             #+#    #+#             */
/*   Updated: 2023/11/20 19:29:51 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		c;
	int		dst_len;

	c = 0;
	dst_len = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen((char *)src));
	while (src[c] && (((c + dst_len) < (size - 1)) || (int)size == -1))
	{
		dst[c + dst_len] = src[c];
		c++;
	}
	dst[dst_len + c] = '\0';
	if ((int)size == -1)
	{
		return (c + dst_len);
	}
	if (dst_len < (int)size)
	{
		return (ft_strlen((char *)src) + dst_len);
	}
	return (ft_strlen((char *)src) + (int)size);
}
