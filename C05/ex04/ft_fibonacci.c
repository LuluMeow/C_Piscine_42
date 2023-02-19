/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 08:46:57 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/08 09:52:08 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int result;
	printf("Enter a number:");
	scanf("%d",&i);
	result = ft_fibonacci(i);
	printf("Result = %d\n", result);
	return (0);
}*/