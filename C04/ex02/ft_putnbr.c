/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 07:30:10 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/07 14:18:57 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	// if (nb == -2147483648)
	// {
	// 	ft_write('-');
	// 	ft_write('2');
	// 	ft_putnbr(147483648);
	// }
	else if (nb < 0)
	{
		ft_write('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_write(nb + '0');
	}
}

/*int main()
{
	int nb = -74;
	ft_putnbr(nb);
	return(0);
}*/