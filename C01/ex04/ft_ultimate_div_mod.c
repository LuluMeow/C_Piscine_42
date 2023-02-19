/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:13:13 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/31 10:59:08 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main()
{
    int c = 95;
    int d = 10;

    int *p1 = &c;
    int *p2 = &d;
    printf("a was %d\n", c);
    printf("b was %d\n", d);

    ft_ultimate_div_mod(p1, p2);
    printf("a is %d\n", c);
    printf("b is %d\n", d);
}*/
