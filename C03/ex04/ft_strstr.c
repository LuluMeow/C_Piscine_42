/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:21:05 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/06 14:15:53 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int get_len(char *str)
{
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int len = get_len(to_find);

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		// while(to_find[j] != '\0' && to_find[j] == str[i])
		// {
		// 	j++;
		// 	i++;
		// }
		// if(j == len)
		// 	return (&str[i - j]);
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

#include<stdio.h>
int main()
{
    char str1[100] = "5421245";
    char str2[100] = "2";

    char *result = ft_strstr(str1, str2);
    printf("New str is:%s", result);

    return(0);
}
