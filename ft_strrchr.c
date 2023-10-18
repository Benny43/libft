/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:44:44 by benny             #+#    #+#             */
/*   Updated: 2023/10/13 13:31:49 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*l;

	l = NULL;
	str = (char *)s;
	while (*str)
	{
		if ((unsigned char)*str == (unsigned char)c)
			l = str;
		str++;
	}
	if ((unsigned char)*str == (unsigned char)c)
		l = str;
	return (l);
}

// int main(void)
// {
// 	char str2[] = "bonjour";

// 	printf("%s\n", ft_strrchr(str2 + 2, 'b'));
// }
