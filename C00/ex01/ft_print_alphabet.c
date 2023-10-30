/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:05:47 by kkonkel           #+#    #+#             */
/*   Updated: 2023/09/28 12:31:23 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';

	while (letter<='z')
	{
		putchar(letter);
		letter++;
	}

	return;
}

int main(void)
{
	ft_print_alphabet();
	
	return(0);
}
