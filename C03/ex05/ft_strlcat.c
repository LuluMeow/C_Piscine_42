/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:20:30 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/06 14:17:38 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//size indicates space. enough size = space = slen + dlen + 1 (for \0).
//append as many source to destination as the size input allowed.
//if size = 0 or < dlen, destination.
//when size <= (slen + dlen) (足够的个数不足够的空间) size + slen (个数).
//when size > (slen + dlen) return: dlen + slen.

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

/*#include<stdio.h>
int main (void)
{
	char src[] = "cat";
    char dest[] = "1314";
    printf("%i \n", ft_strlcat(dest, src, 6));
    printf("%s \n", dest);
}*/
