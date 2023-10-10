/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:41:29 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 18:09:56 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_tmp;
	char	*src_tmp;
	int		c;

	src_tmp = (char *)src;
	dest_tmp = (char *)dest;
	c = 0;
	while (src_tmp[c] && (c < n))
	{
		dest_tmp[c] = src_tmp[c];
		c++;
	}
	dest = dest_tmp;
	return (dest);
}

#include <stdio.h>

int main(void)
{
    char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};

    printf("Antes -\nsrc:%s\ndest:%s\n", s, s0);//Mudar parametros do printf se necessario
    ft_memmove(s0, s, 7); //Mudar nome e parametros da funcao
    printf("Depois -\nsrc:%s\ndest:%s\n", s, s0);//Mudar parametros do printf se necessario
    
}