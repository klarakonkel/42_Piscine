/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:00:29 by kkonkel           #+#    #+#             */
/*   Updated: 2023/11/10 14:40:09 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("%d %d\n", a, b);
}
/* */

int	main()
{
	int div = 0;
	int mod = 0;
	ft_div_mod(5, 2, &div, &mod);
	printf("%d %d", div, mod);
	return (0);
}
 /* */
