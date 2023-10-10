/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:03:17 by bde-mato          #+#    #+#             */
/*   Updated: 2023/10/09 17:34:11 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int main(void)
{
    int c;

    c = 49; //Mudar nome e parametros da funcao
    printf("Minha: %d\n", ft_isdigit(c));//Mudar parametros do printf se necessario
    printf("libc: %d\n", isdigit(c));//Mudar parametros do printf se necessario
}