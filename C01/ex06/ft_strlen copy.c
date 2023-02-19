/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:09:14 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/30 15:49:03 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

// int main()
// {
//     char *strlen= "Let's go swimming";
//     int n;
//     char cn; 
//     n = ft_strlen(strlen);
//     cn = n + '0';
//     write(1, &cn, 1);
//     printf("%d", n);
//     return(0);
// }
