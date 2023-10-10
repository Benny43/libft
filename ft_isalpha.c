/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:44:29 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 17:32:38 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(char x)
{
	if (x > 31 && x < 127)
	{
		return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
    char c = 'd';

    printf("%d\n", ft_isalpha(c));
    printf("%d\n", isalpha(c));

    return(0);
}