/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 07:38:10 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/08 08:06:30 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int result;
	printf("Enter a number:");
	scanf("%d",&i);
	result = ft_recursive_factorial(i);
	printf("factorial = %d\n", result);
	return (0);
}*/