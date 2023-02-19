/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 07:31:17 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/02 14:04:05 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main()
{
    char dest[] = "01258";
    char src[] = "ABCDEFGHI";
    int num = 8;
    printf("dest was: %s\n", dest);
    ft_strncpy(dest, src, num);
    printf("dest now is: %s", dest);
    return(0);
}
