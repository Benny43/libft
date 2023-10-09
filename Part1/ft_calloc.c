/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:56:33 by benny             #+#    #+#             */
/*   Updated: 2023/10/07 01:10:23 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	int i;
	void *str;

	if ((nmemb || size) == 0) 
	{	
		str = (void *)malloc(0);
		return str;
	}
	if ((nmemb * size) > __INTMAX_WIDTH__)
	{
		printf("Error: size bigger than max int!");
		exit;
	}
	else
	{
		str = (void *)malloc(nmemb * size);
		return str;
	}
}

int main(void)
{
	void * p = ft_calloc(2, 2);
	char e[] = {0, 0, 0, 0};

	printf("%d\n", memcmp(p, e, 4));
}