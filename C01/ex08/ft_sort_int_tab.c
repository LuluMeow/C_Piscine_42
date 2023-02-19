/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:19:29 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/30 15:38:54 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>

void	swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i < size - 1)
	{
		x = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[x])
			{
				x = j;
			}
			j++;
		}
		swap(&tab[x], &tab[i]);
		i++;
	}
}

// Function to print an array
void printArray(int *tab, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
        printf("\n");
    }
}
int main()
{
    int arr[] = { 0, 23, 4, 47, 9, 66, 45 };
    int *prt = arr;
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 7;
    printf("Original array: \n");
    printArray(prt, n);
    ft_sort_int_tab(prt, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(prt, n);
    return 0;
}
