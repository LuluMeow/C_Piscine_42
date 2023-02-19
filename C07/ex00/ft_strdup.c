/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:13:54 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/13 11:57:03 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	get_len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*copy;

	len = get_len(src) + 1;
	i = 0;
	copy = (char *)malloc(len * sizeof(char));
	if (!copy)
		return (0);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int	main()
{
	char str[100] = "Hello meow";
	printf("i = %d\n", get_len(str));
	printf("copy = %s\n", ft_strdup(str));
	free(copy);
	return (0);
}*/
