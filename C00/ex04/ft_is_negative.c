/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:31:18 by kkonkel           #+#    #+#             */
/*   Updated: 2023/10/04 09:48:37 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
void ft_is_negative(int n)
{
	if(n<0)
	{
	putchar('N');
	}
	else
	{
	putchar('P');
	}
	return;
}
int main(void)
{
	int number =0;
	ft_is_negative(number);

	return(0);
}
