/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:03:16 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/19 12:52:06 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int numcmp(int a, int b)
{
	if (a < b)
		return (a - b);
	else if (a == b)
		return (0);
	else
		return (a - b);
}*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 1;
	while (i < length - 1 && sorted)
	{
		if ((*f)(tab[i], tab [i + 1]) < 0)
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		sorted = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}

/*#include<stdio.h>
int	main()
{
	int tab[10] = {1, 1, 5, 5, 8};
	int num = ft_is_sort(tab, 5, numcmp);
	printf("num = %d\n", num);
	return (0);
}*/
