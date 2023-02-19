/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:51:31 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/19 11:00:35 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*#include<stdio.h>
int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = ft_any(av, &ft_strlen);
		printf("i = %d", i);
	}
	return (0);
}*/
