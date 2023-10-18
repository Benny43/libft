/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:41:29 by benny             #+#    #+#             */
/*   Updated: 2023/10/12 21:25:39 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_tmp;
	char const	*src_tmp;
	int			c;

	src_tmp = src;
	dest_tmp = dest;
	c = n - 1;
	if (dest_tmp > src_tmp)
	{
		while (c >= 0)
		{
			dest_tmp[c] = src_tmp[c];
			c--;
		}
	}
	else
	{
		// c = 0;
		// while (c < n)
		// {
		// 	dest_tmp[c] = src_tmp[c];
		// 	c++;
		// }
		ft_memcpy(dest_tmp, src_tmp, n);
	}
	return (dest);
}
