/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:56:54 by kkonkel           #+#    #+#             */
/*   Updated: 2023/11/10 15:07:54 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb >= 1 && nb <=12)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	else
		return (0);
	return (nb);
}
int	main()
{
	printf("%d", ft_recursive_factorial(13));
}
