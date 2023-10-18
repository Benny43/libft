/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:12:32 by benny             #+#    #+#             */
/*   Updated: 2023/10/11 16:43:13 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		c;
	char	*strdup;
	int		sln;

	c = 0;
	sln = ft_strlen(str);
	strdup = (char *)malloc(sln + 1);
	if (strdup == NULL)
		return (strdup);
	while (str[c] != '\0')
	{
		strdup[c] = str[c];
		c++;
	}
	strdup[sln] = '\0';
	return (strdup);
}
