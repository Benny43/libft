/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:23:45 by benny             #+#    #+#             */
/*   Updated: 2023/10/07 00:54:31 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int ft_strlen(const char *str)
{
	int j;

	j = 0;
	while(str[j])
		j++;
	return j;
}

char *ft_strjoin(const char *s1, const char *s2)
{
	int i;
	char *tmpstr;
	int strsize;
	int k;
	
	strsize = ft_strlen(s1) + ft_strlen(s2);
	printf("%d\n", strsize);
	tmpstr = (char *)malloc(strsize);
	
	if (!tmpstr)
		return NULL;
	i = 0;
	while (s1[i])
	{
		tmpstr[i] = s1[i];
		i++;
	}
	k = 0;
	while(s2[k])
	{
		tmpstr[i] = s2[k];
		i++;
		k++;
	}
	tmpstr[i] = '\0';
	return tmpstr;
}

int main (void)
{
	char * s = ft_strjoin("tripouille", "42");

	printf("%s\n", s);
}