/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:01:31 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/08 07:37:17 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

/*#include <stdio.h>
int	main()
{
	printf("nb = %d", ft_iterative_factorial(5));
	return(0);
}*/
