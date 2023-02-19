/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:04:45 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/27 16:31:54 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	if (n < 0)
	{
		neg = 'N';
		write(1, &neg, 1);
	}
	else
	{
		pos = 'P';
		write(1, &pos, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(-3);
	return (0);
}*/
