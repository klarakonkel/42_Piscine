/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:22:05 by kkonkel           #+#    #+#             */
/*   Updated: 2023/11/07 15:31:22 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(void);

void	ft_print_numbers(void)
{
	int	digit;

	digit = 0;
	while (digit <= 9)
	{
		ft_putchar(digit);
		digit++;
	}
}
