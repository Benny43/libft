/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:46:18 by benny             #+#    #+#             */
/*   Updated: 2023/10/12 09:55:52 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*s_tmp;

	i = 0;
	s_tmp = (char *)s;
	while (i < n)
	{
		if ((unsigned char)s_tmp[i] == (unsigned char)c)
		{
			return ((void *)&s_tmp[i]);
		}
		i++;
	}
	return (NULL);
}
