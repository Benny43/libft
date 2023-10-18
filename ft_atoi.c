/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:31:16 by benny             #+#    #+#             */
/*   Updated: 2023/10/14 19:37:16 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 0 - c, sign - 1, res - 2, count - 3

int	ft_atoi(const char *nptr)
{
	int	c;
	int	res;
	int	sign;

	c = 0;
	while (nptr[c] == ' ' || (nptr[c] > 8 && nptr[c] < 14))
		c++;
	sign = 1;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c] == '-')
			sign = -sign;
		c++;
	}
	res = 0;
	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		res *= 10;
		res += nptr[c] - 48;
		c++;
	}
	return (sign * res);
}

// int main(void)
// {
// 	int n = ft_atoi("-4886");
// 	printf("%d\n", n);

// 	n = ft_atoi("546:5");
// 	printf("%d\n", n);
// }