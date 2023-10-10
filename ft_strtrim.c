/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 02:09:21 by benny             #+#    #+#             */
/*   Updated: 2023/10/10 15:24:17 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	size_t size;
	int inset;
	char *retstr;

	i = 0;
	size = 0;
	k = 0;
	while (s1[i])
	{
		inset = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				inset = 1;
				break ;
			}
			j++;
		}
		if (!inset)
		{
			size++;
		}
		i++;
	}
	retstr = (char *)malloc(size + 1);

	i = 0;
	j = 0;
	while (s1[i])
	{
		inset = 0;
		k = 0;
		while (set[k])
		{
			if (s1[i] == set[k])
			{
				inset = 1;
				break ;
			}
			k++;
		}
		if (!inset)
		{
			retstr[j] = s1[i];
			j++;
		}
		i++;
	}
	retstr[j] = '\0';
	return (retstr);
}

int main(void)
{
	//Teste1
	
	char * s = "   xxxtripouille     ";
	char *sd;
	
	printf("Antes: %s\n", s);
	
	sd = ft_strtrim(s, " x");
	
	printf("Depois: %s\n", sd);

	//Teste 2

	s = "tripouille   xxx";
	
	printf("Antes: %s\n", s);
	
	sd = ft_strtrim(s, " x");
	
	printf("Depois: %s\n", sd);

	return 0;
}