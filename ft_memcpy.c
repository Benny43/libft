/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:44:54 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 18:09:10 by benny            ###   ########.fr       */
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
	while (c < n)
	{
		tmp_dest[c] = tmp_src[c];
		c++;
	}
	return (dest);
}

int main(void)
{
    char dest[50];
	char src[] = "Olaaaa";	

    ft_memcpy(dest, src, 3);
    printf("ft_memcpy -\ndest:%s\n", dest);
	memcpy(dest, src, 3);
	printf("memcpy -\ndest:%s\n", dest);
}