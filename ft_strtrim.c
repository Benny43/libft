/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 02:09:21 by benny             #+#    #+#             */
/*   Updated: 2023/10/12 09:58:34 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		p[4];
	char	*retstr;

	p[0] = ft_strlen((char *)s1);
	p[1] = 0;
	while (is_in_set(s1[p[1]], set))
		p[1]++;
	p[2] = 1;
	while (is_in_set(s1[p[0] - p[2]], set))
		p[2]++;
	p[2]--;
	retstr = (char *)malloc((p[0] - (p[1] + p[2])) + 1);
	if (!retstr)
		return (NULL);
	p[3] = 0;
	while (p[1] + p[3] < p[0] - p[2])
	{
		retstr[p[3]] = s1[p[1] + p[3]];
		p[3]++;
	}
	retstr[p[3]] = '\0';
	return (retstr);
}
