/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:07:02 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/13 12:10:01 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	n = max - min;
	arr = (int *)malloc(n * sizeof(int));
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (n);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 2;
	max = 9;
	size = ft_ultimate_range(&tab, min, max);
	printf("size = %d\n", size);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return 0;
}*/
