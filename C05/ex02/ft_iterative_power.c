/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 08:10:39 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/08 15:01:30 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		i = i * nb;
		power --;
	}
	return (i);
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
	result = ft_iterative_power(i, p);
	printf("Result = %d\n", result);
	return (0);
}*/