/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:54:10 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/06 14:00:08 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main ()
{
    char str1[] = "huimimimimi";
    char str2[] = "huimim8mimi";
    unsigned int n = 5; 
    int y = ft_strncmp(str1, str2, n);
    printf("y = %d", y);
    return 0;
}*/
