/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:17:02 by benny             #+#    #+#             */
/*   Updated: 2023/10/04 01:31:41 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return(char *)&str[i];
		i++;
	}
	return(NULL);
}

int main(void)
{
	char s[] = "tripouille";
	
	printf("%p\n", ft_strchr(s, 't'));
}