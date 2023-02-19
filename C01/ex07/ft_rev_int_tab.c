/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:08:19 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/30 15:50:49 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	swap;

	i = size - 1;
	n = 0;
	while (i >= size / 2)
	{
		swap = tab[i];
		tab[i] = tab[n];
		tab[n] = swap;
		i--;
		n++;
	}
}
// int main()
// {
//     int asize = 5;
//     int arr[] = {4, 3, 9, 0, 6};
//     for(int x = 0; x < asize; x++) 
//     {
//         printf("The array was: %d \n", arr[x]);
//     }

//     int *prt = arr;
//     ft_rev_int_tab(prt, asize);

//     for(int x = 0; x < asize; x++) 
//     {
//         printf("The array is: %d \n", prt[x]);
//     }

//     return 0;
// }
