/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:58:47 by benny             #+#    #+#             */
/*   Updated: 2023/10/04 02:33:25 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while((s1[i] || s2[i]) && n > 0)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
		n--;
	}
	return(0);
}

int main(void)
{
	printf("%d\n", ft_strncmp("1234", "1235", 3)); // 0
	printf("%d\n", ft_strncmp("1234", "1235", -1)); // Negative
	printf("%d\n", ft_strncmp("1234", "1235", -1)); // Negative
	printf("%d\n", ft_strncmp("", "", 42)); // 0
	printf("%d\n", ft_strncmp("Tripouille", "Tripouille", 42)); // 0
	printf("%d\n", ft_strncmp("Tripouille", "tripouille", 42)); // smaller than 0
	printf("%d\n", ft_strncmp("Tripouille", "TriPouille", 42)); // bigger than 0
}