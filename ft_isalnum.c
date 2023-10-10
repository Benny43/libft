/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:33 by bde-mato          #+#    #+#             */
/*   Updated: 2023/10/09 17:32:07 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

int main(void)
{
    int c;

    c = 49; //Mudar nome e parametros da funcao
    printf("Minha: %d\n", ft_isalnum(c));//Mudar parametros do printf se necessario
    printf("libc: %d\n", isalnum(c));//Mudar parametros do printf se necessario
}