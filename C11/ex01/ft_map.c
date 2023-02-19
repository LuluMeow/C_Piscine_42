/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:49:49 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/19 15:01:33 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

/*int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	i;

	array = (int *)malloc(length * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}

/*#include<stdio.h>
int main()
{
	int tab[10] = {23, -6, -65, 1};
	int *array;
	array = ft_map(tab, 4, &ft_abs);
	int i = 0;
	while (i < 4)
	{
		printf("array[%d] = %d\n", i, array[i]); 
		i++;
	}
	return (0);
}*/
