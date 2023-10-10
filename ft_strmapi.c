/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:22:33 by benny             #+#    #+#             */
/*   Updated: 2023/10/10 16:30:41 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = ft_strdup((char *)s);
	while (result[i])
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}


char addOne(unsigned int i, char c) {return (i + c);}

int main(void)
{
	char * s = ft_strmapi("1234", addOne);
	
	printf("%s\n", s);
}