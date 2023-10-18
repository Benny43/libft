/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:23:45 by benny             #+#    #+#             */
/*   Updated: 2023/10/12 10:45:13 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_string_size(const char *s)
{
	if (s == NULL)
		return (0);
	return (ft_strlen((char *) s));
}

// 0 - i, 1 - j
char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i[2];
	char	*tmpstr;
	int		strsize;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	strsize = get_string_size(s1) + get_string_size(s2) + 1;
	tmpstr = (char *)malloc(strsize);
	if (!tmpstr)
		return (NULL);
	i[0] = 0;
	while (s1[i[0]])
	{
		tmpstr[i[0]] = s1[i[0]];
		i[0]++;
	}
	i[1] = 0;
	while (s2[i[1]])
	{
		tmpstr[i[0]] = s2[i[1]];
		i[0]++;
		i[1]++;
	}
	tmpstr[i[0]] = '\0';
	return (tmpstr);
}
