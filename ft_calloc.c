/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_callocNF.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:56:33 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 16:52:59 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calloc fills the newly created string with 0's

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (!nmemb || !size)
		return (malloc(0));
	str = (char *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

int main(void)
{
	void * p = ft_calloc(2, 2);
	char e[] = {0, 0, 0, 0};

	printf("%d\n", memcmp(p, e, 4));
}