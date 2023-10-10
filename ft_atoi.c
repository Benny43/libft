/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:31:16 by benny             #+#    #+#             */
/*   Updated: 2023/10/09 17:31:21 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(char *str)
{
	int	c;
	int	sign;
	int	res;

	c = 0;
	sign = 1;
	res = 0;
	while (str[c] == ' ' || (str[c] > 8 && str[c] < 14))
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
		{
			sign = -sign;
		}
		c++;
	}
	while (str[c] > '0' && str[c] < '9')
	{
		res *= 10;
		res += str[c] - 48;
		c++;
	}
	return (sign * res);
}

int main(void)
{
    char *str = "  ----++1323asd";

    printf("%d\n", ft_atoi(str));
}