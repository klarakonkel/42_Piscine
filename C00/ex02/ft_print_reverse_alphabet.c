/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:36:29 by kkonkel           #+#    #+#             */
/*   Updated: 2023/09/28 12:37:49 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_print_alphabet(void)
{
	char letter;
	letter = 'z';

	while (letter>='a')
	{
		putchar(letter);
		letter--;
	}

	return;
}

int main(void)
{
	ft_print_alphabet();
	
	return(0);
}
