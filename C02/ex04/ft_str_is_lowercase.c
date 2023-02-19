/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:23:02 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/01 12:16:12 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>
// int main()
// {
//     char str1[] = "sdfdgfyuytyS";
//     int n = ft_str_is_lowercase(str1);
// 	printf("n = %d", n);
//     return(0);
// }
