/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:43:42 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/30 15:43:53 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int	main(void)
// {
// 	int	na = 16;
// 	int	nb = 79;

// 	printf("The value of n1 was %d\n", na);
// 	printf("The value of n2 was %d\n", nb);

// 	ft_swap(&na, &nb);

// 	printf("The value of n1 is %d\n", na);
// 	printf("The value of n2 is %d\n", nb);
// }
