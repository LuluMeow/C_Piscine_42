/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:23:17 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/27 16:16:41 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		write (1, &ch, 1);
		ch++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
