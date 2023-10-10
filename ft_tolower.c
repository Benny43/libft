/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:18:21 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 18:18:40 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int main(void)
{
    char uppercaseChar = 'A';
    char lowercaseChar = ft_tolower(uppercaseChar);

    printf("Original character: %c\n", uppercaseChar);
    printf("Lower character: %c\n", lowercaseChar);

    return 0;
}