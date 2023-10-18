/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:17:04 by benny             #+#    #+#             */
/*   Updated: 2023/10/18 13:40:16 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	nbasstr[15];
	int		i;

	nb = n;
	if (nb == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	i = 0;
	while (nb > 0)
	{
		nbasstr[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(fd, &nbasstr[i], 1);
		i--;
	}
}
