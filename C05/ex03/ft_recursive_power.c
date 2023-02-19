/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 08:30:38 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/08 08:46:27 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

/*#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int p = 0;
	int result;
	printf("Enter a base number:");
	scanf("%d",&i);
	printf("Enter a power:");
	scanf("%d",&p);
	result = ft_recursive_power(i, p);
	printf("Result = %d\n", result);
	return (0);
}*/
