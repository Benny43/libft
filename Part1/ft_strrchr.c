/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:44:44 by benny             #+#    #+#             */
/*   Updated: 2023/10/04 01:57:19 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

char *ft_strrchr(const char *str, int c)
{
	int ln_str;

	ln_str = ft_strlen((char *)str);
	while(str[ln_str] >= 0)
	{
		if (str[ln_str] == c)
			return(char *)&str[ln_str];
		ln_str--;
	}
	return NULL;
}

int main(void)
{
	char s[] = "tripouille";
	
	printf("%p\n", ft_strrchr(s, 't'));
}