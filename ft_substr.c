/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:49:54 by benny             #+#    #+#             */
/*   Updated: 2023/11/15 14:09:45 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;
	int		slen;

	slen = (unsigned long)ft_strlen((char *)s);
	i = start;
	if (start >= slen)
		return (ft_calloc(1, sizeof(char)));
	if (start + len >= slen + 1)
		substr = ft_calloc((slen - start) + 1, sizeof(char));
	else
		substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	while (s[i] && i < start + len)
	{
		substr[i - start] = s[i];
		i++;
	}
	substr[i - start] = '\0';
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