/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:44:54 by benny             #+#    #+#             */
/*   Updated: 2023/10/03 16:46:12 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	char *str;

	str = (char *)s;
	while(n > 0)
	{
		str[n] = '\0';
		n--;
	}
	return(s);
}

#include <stdio.h>

int main(void)
{
    char tab[100];
	memset(tab, 'A', 100);
	ft_bzero(tab, 50);
}