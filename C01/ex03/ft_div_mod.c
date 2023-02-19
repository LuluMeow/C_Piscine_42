/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:26:26 by lpeng             #+#    #+#             */
/*   Updated: 2023/01/31 11:20:31 by lpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int main(void)
// {
//    int n1 = 49;
//    int n2 = 3;
//    int *d;
//    int *m;
//	  int a;
// 	  int b;
//
//	  d = &a;
//	  m = &b;
//	
//  ft_div_mod(n1, n2, d, m);
//	printf("Div result is: %d \n", *d);
//	printf("Mod result is: %d \n", *m);
//  return(0);
// }
