/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:18:49 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 18:19:14 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
    char lowercaseChar = 'a';
    char uppercaseChar = ft_toupper(lowercaseChar);

    printf("Original character: %c\n", lowercaseChar);
    printf("Uppercase character: %c\n", uppercaseChar);

    return 0;
}