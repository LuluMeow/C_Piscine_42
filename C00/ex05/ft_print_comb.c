/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:40:03 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/27 16:33:39 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	writes(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (first != '7' || second != '8' || third != '9')
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '1';
	third = '2';
	while (first <= '7' || second <= '8' || third <= '9')
	{
		writes (first, second, third);
		if (second == '8')
		{
			first ++;
			second = first;
		}
		if (third == '9')
		{
			second ++;
			third = second;
		}
		third ++;
	}	
}	

/*int	main(void)
{
	ft_print_comb ();
	return (0);
}*/
