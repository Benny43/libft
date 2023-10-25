/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 03:09:08 by benny             #+#    #+#             */
/*   Updated: 2023/10/25 20:19:01 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(int n)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb == 0)
		count++;
	while (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*res;
	int		len;

	len = get_int_len(n);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	nb = n;
	if (n == 0)
		res[0] = '0';
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	len--;
	while (nb > 0)
	{
		res[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (res);
}
