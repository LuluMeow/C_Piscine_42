/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:24:05 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/06 14:14:14 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = get_len (dest);
	while (c < nb && src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dest);
}

/*#include<stdio.h>
int main()
{
    char str1[100] = "ABCD";
    char str2[100] = "123456";
    unsigned int i = 5;
    printf("str1 was:%s\n", str1);
    ft_strncat(str1, str2, i);
    printf("str1 is:%s", str1);
    // printf("answer is %s", strncat(str1, str2, i));
    return(0);
}*/
