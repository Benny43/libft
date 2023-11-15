/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 02:09:21 by benny             #+#    #+#             */
/*   Updated: 2023/11/15 18:43:31 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// p[0] - sln, p[1] - start, p[2] - end, p[3] - i
char	*ft_strtrim(char const *s1, char const *set)
{
	int		p[4];
	char	*retstr;

	p[0] = ft_strlen((char *)s1);
	p[1] = 0;
	while (is_in_set(set, s1[p[1]]))
		p[1]++;
	p[2] = 1;
	while (is_in_set(set, s1[p[0] - p[2]]))
		p[2]++;
	p[2]--;
	if (p[1] + p[2] >= p[0])
		return (ft_calloc(1, sizeof(char)));
	retstr = ft_calloc((p[0] - (p[1] + p[2])) + 1, sizeof(char));
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
