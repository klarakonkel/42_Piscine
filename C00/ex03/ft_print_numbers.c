/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:39:21 by kkonkel           #+#    #+#             */
/*   Updated: 2023/09/28 12:44:52 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_print_numbers(void)
{
	char digit;
	digit ='1';

	while (digit<='9')
	{
		putchar(digit);
		digit++;
	}

	return;
}

int main(void)
{
	ft_print_numbers();
	
	return(0);
}
