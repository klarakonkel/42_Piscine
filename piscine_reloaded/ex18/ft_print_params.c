/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:56:49 by kkonkel           #+#    #+#             */
/*   Updated: 2023/11/10 16:35:12 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
} */

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if(argc < 2)
	{
		return (0);
	}
	else
	{
		while(argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
