/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:56:49 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/14 12:29:45 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	intochar(n1, n2)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = (n1 / 10) + '0';
	c2 = (n1 % 10) + '0';
	c3 = (n2 / 10) + '0';
	c4 = (n2 % 10) + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &" ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (n1 != 98 || n2 != 99)
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98 || num2 <= 99)
	{
		intochar(num1, num2);
		if (num2 == 99)
		{
			num1++;
			num2 = num1;
		}
		num2++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
