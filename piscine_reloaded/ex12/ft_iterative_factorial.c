/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:41:07 by kkonkel           #+#    #+#             */
/*   Updated: 2023/11/10 14:56:04 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if(nb == 0 || nb == 1)
		return (1);
	if (nb > 1 && nb <=12)
	{
		while(nb >= 1)
		{
			factorial *= nb;
			nb--;
		}
		return (factorial);
	}
	else
		return (0);
}
int	main()
{
	printf("%d",ft_iterative_factorial(12));
}
// largest int: 2 147 483 647
// 12! = 479 001 600
// 13! = 6 227 020 800
// hence the largest factorial in int is 12!
