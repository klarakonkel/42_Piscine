/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:36:44 by kkonkel           #+#    #+#             */
/*   Updated: 2023/11/10 17:43:24 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(argv[i])

	if (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			putchar(argv[i][j]);
		}
	}
}
