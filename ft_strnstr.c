/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 02:02:13 by benny             #+#    #+#             */
/*   Updated: 2023/10/25 20:20:46 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*big_tmp;
	char	*little_tmp;
	size_t	j;

	big_tmp = (char *)big;
	little_tmp = (char *)little;
	if (ft_strlen(little_tmp) == 0)
		return (big_tmp);
	i = 0;
	while (big_tmp[i] && i < len)
	{
		j = 0;
		while (little_tmp[j] == big_tmp[i + j] && (i + j) < len)
		{
			j++;
			if (little_tmp[j] == '\0')
				return (&big_tmp[i]);
		}
		i++;
	}
	return (NULL);
}
