/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:31:28 by kkonkel           #+#    #+#             */
/*   Updated: 2023/11/10 15:52:36 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb > 0)
	{
		while (root <= 46340)
		{
			if (nb == root * root)
				return (root);
			else
				root++;
		}
	}
	return (0);
}

int	main()
{
	printf("%d", ft_sqrt(2147395600));
}
// sqrt of the largest int is 46340.95 hence nb can be max 46340
