/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:44:54 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 17:27:33 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		str[n] = '\0';
		n--;
	}
}

// int main(void)
// {
//     char tab[100];
// 	memset(tab, 'A', 100);
// 	ft_bzero(tab, 50);
// 	printf("%s\n", tab);
// }