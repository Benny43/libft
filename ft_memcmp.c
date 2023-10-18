/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:32:01 by benny             #+#    #+#             */
/*   Updated: 2023/10/13 13:54:55 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int			i;
	const char	*s1_tmp;
	const char	*s2_tmp;

	i = 0;
	s1_tmp = s1;
	s2_tmp = s2;
	while (i < n)
	{
		if ((unsigned char)s1_tmp[i] != (unsigned char)s2_tmp[i])
		{
			return ((unsigned char)s1_tmp[i] - (unsigned char)s2_tmp[i]);
		}
		i++;
	}
	return (0);
}
