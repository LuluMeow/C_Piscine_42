/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:09:38 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/11 12:19:43 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	print_av(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	strcpm(char *str1, char *str2)
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

int	main(int ac, char **av)
{
	int	i;
	int	count;

	count = 1;
	while (count < ac)
	{
		i = 1;
		while (i < ac - count)
		{
			if (strcpm(av[i + 1], av[i]) > 0)
				swap(&av[i], &av[i + 1]);
			i++;
		}
		count++;
	}
	print_av(ac, av);
	return (0);
}
