/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:44:54 by benny             #+#    #+#             */
/*   Updated: 2023/10/13 00:53:56 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		c;
	char	*tmp_dest;
	char	*tmp_src;

	c = 0;
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	if ((tmp_dest == NULL) || (tmp_src == NULL))
		return (NULL);
	while (c < n)
	{
		tmp_dest[c] = tmp_src[c];
		c++;
	}
	return ((char *)dest);
}

// int main(void)
// {
// 	char *str = NULL;
// 	char *dest = "olaaaa";

// 	printf("%s\n", (char *)ft_memcpy("segfaulter tu dois", NULL, 17));
// }