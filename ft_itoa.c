/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 03:09:08 by benny             #+#    #+#             */
/*   Updated: 2023/10/10 16:17:19 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// check how many digits there is (/10) and make sure you have enough space for the minus, 
// if there is one and the null terminator
static int	get_int_len(int n)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	while (nb <= 0)
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
	res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
		len--;
	}
	while (nb > 0)
	{
		res[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (res);
}

int main(void)
{
	int n = -4242;

	char *str = ft_itoa(n);
	printf ("%s\n", str);
}
