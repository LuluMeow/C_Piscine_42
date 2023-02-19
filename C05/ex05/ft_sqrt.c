/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:57:38 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/10 10:21:50 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	ans;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	ans = 2;
	if (b >= 2)
	{
		while (ans * ans <= b)
		{
			if (ans * ans == b)
			{
				return (ans);
			}
			ans++;
		}
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int result;

	printf("Enter a number:");
	scanf("%d",&i);
	result = ft_sqrt(i);
	printf("The square root = %d\n", result);
	return (0);
}
