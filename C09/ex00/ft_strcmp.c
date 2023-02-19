/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:02:41 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/06 13:55:41 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

/*
#include <stdio.h>
int main ()
{
    char str1[] = "hudhfijxnvlkds";
    char str2[] = "hudhfi";

    int n = ft_strcmp(str1, str2);
    printf("n = %d\n", n);
    return 0;
}
*/
