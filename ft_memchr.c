/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchrNF.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:46:18 by benny             #+#    #+#             */
/*   Updated: 2023/10/10 14:54:17 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

//take out the const parameter from the function

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

int main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%p\n", ft_memchr(s, 0, 0)); // null
	printf("%p\n", ft_memchr(s, 0, 1)); // s[1]
	printf("%p\n", ft_memchr(s, 2, 3)); // s[2]
}