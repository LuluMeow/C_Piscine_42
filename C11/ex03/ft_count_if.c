/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:00:53 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/19 11:02:03 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}*/

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			num++;
		i++;
	}
	return (num);
}

/*#include<stdio.h>
int	main(int ac, char **av)
{
	int num = ft_count_if(av, 4, ft_strlen);
	printf("num = %d", num);
	return(0);
}*/
