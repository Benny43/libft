/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:49:54 by benny             #+#    #+#             */
/*   Updated: 2023/10/24 21:38:45 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	substr = (char *)malloc((len + 1) * sizeof(unsigned char));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char str []= "lorem ipsum dolor sit amet";
// 	char *substr = ft_substr(str, 7, 10);

// 	printf("%s\n", substr); // Expected: psum dolor

// 	substr = ft_substr(str, 0, 10);
// 	printf("%s\n", substr); // Expected: lorem ipsu
// }