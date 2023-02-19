/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:11:00 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/19 11:16:19 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str2[i] != str1[i])
			return (str2[i] - str1[i]);
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[j] != 0)
		{
			if (tab[j + 1] != 0 && ft_strcmp(tab[j], tab[j + 1]) < 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*#include<stdio.h>
int main(int ac, char **av)
{
	int i = 0;
	ft_sort_string_tab(av);
	while (i < ac)
	{
		printf("tab[%d] = %s\n", i, av[i]);
		i++;
	}
	return (0);
}*/
