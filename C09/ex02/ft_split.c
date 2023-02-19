/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:13:43 by lpeng             #+#    #+#             */
/*   Updated: 2023/02/15 12:28:24 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	if_charset(char str_char, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (str_char == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	how_many_string(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (if_charset(str[i], charset) == 0
			&& if_charset(str[i + 1], charset) == 1)
			count++;
		i++;
	}
	if (if_charset(str[i - 1], charset) == 1)
		return (count);
	else
		return (count + 1);
}

int	str_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && if_charset(str[i], charset) == 0)
		i++;
	return (i);
}

char	*each_string(char *str, int j)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)malloc((j + 1) * sizeof(char));
	if (!string)
		return (0);
	while (i < j && str[i])
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		string_number;
	int		i;
	int		j;

	string_number = how_many_string(str, charset);
	split = (char **)malloc((string_number + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	while (i < string_number)
	{
		while (if_charset(*str, charset))
			str++;
		j = str_len(str, charset);
		split[i] = each_string(str, j);
		str += j;
		i++;
	}
	split[string_number] = 0;
	return (split);
}

/*#include<stdio.h>
int	main()
{
	char str[100] = "321x567x99";
	char charset[100] = "x";
	 printf("we got %d strings now\n", how_many_string(str, charset));
	char **split = ft_split(str, charset);
	int	i = 0;
	while (i < 3)
	{
		printf("string%d is %s\n", i, split[i]);
		i++;
	}
	return (0);
}*/
