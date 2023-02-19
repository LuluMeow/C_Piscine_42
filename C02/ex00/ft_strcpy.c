/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:30:50 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/01 12:09:05 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>

// int main()
// {
//     char str1[] = "Let's go swimming\n";
//     char str2[] = "Then the little fish got so very very tired\n";
//     printf("str1 was: %s", str1);
//     ft_strcpy(str1, str2);
//     printf("str1 now is: %s", str1);
//     return(0);
// }
