/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:59:42 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 18:10:47 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		tmp[n] = c;
		n--;
	}
	return (s);
}

int main(void)
{
    char src[] = "Hello World";
    char c = 'c';
    int n = 5;

    printf("ft_memset -%p\n", ft_memset(src, c, n));//Mudar parametros do printf se necessario
    printf("memset -%p\n", memset(src, c, n));
}