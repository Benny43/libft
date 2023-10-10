/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 00:13:42 by benny             #+#    #+#             */
/*   Updated: 2023/10/08 00:51:19 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	int isc;
	int size;
	int wsize;
	char **retstr;

	i = 0;
	j = 0;
	k = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			size++;
		i++;
	}
	
	retstr = (char **)malloc(size * sizeof(char *));
	
	if(!retstr)
		return NULL;
	
	i = 0;
	while(s[i])
	{
		isc = 0;
		if(s[i] == c)
		{
			retstr[j] = (char *)malloc((wsize + 1)* sizeof(char *));
			isc = 1;
			j++;
		}
		if(!isc)
			wsize++;
		i++;
	}
	
	i = 0;
	j = 0;
	while(s[i])
	{
		isc = 0;
		if(s[i] == c)
		{
			retstr[j][k] = '\0';
			isc = 1;
			j++;
			k = 0;
		}
		if(!isc)
			retstr[j][k] = s[i];
		k++;
		i++;
	}
	
	return retstr;
}

int main(void)
{
	int i = 0;
	
	char ** tab = ft_split("  tripouille  42  ", ' ');

	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}