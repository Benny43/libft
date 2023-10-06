/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:32:01 by benny             #+#    #+#             */
/*   Updated: 2023/10/05 01:52:09 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	const char *s1_tmp;
	const char *s2_tmp;

	i = 0;
	s1_tmp = s1;
	s2_tmp = s2;
	while((s1_tmp[i] || s2_tmp[i]) && i < n)
	{
		if((unsigned char)s1_tmp[i] == (unsigned char)s2_tmp[i])
		{
			if((unsigned char)s1_tmp[i] != (unsigned char)s2_tmp[i])
			{
				return (s2_tmp[i] - s1_tmp[i]);
			}
		}
		return(s2_tmp[i] - s1_tmp[i]);
		i++;
	}
	return(0);
}

int main(void)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};

	printf("%d\n", ft_memcmp(s, sCpy, 4));
	printf("%d\n", ft_memcmp(s, s2, 0));
	printf("%d\n", ft_memcmp(s, s2, 1));
}