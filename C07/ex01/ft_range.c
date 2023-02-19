/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:08:36 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/13 16:10:59 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;
	int	i;

	if (min >= max)
		return (NULL);
	n = max - min;
	i = 0;
	array = (int *)malloc(n * sizeof(int));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

int		main(void)
{
	int *tab = ft_range(2, 5);
	int	i = 0;
	while (i < 3)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
