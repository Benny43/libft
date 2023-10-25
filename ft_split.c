/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:52:44 by benny             #+#    #+#             */
/*   Updated: 2023/10/24 21:16:48 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		count++;
	}
	if (i > 0 && s[i - 1] == c)
		count--;
	return (count);
}

char	**attribute_words(char **retstr, char const *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		if (j >= 1)
		{
			retstr[count] = ft_substr(s, i, j);
			count++;
		}
		i += j;
	}
	retstr[count] = NULL;
	return (retstr);
}

char	**ft_split(char const *s, char c)
{
	char	**retstr;

	retstr = (char **)malloc((count_words(s, c) + 1) * sizeof(unsigned char *));
	if (!retstr)
		return (NULL);
	retstr = attribute_words(retstr, s, c);
	return (retstr);
}
