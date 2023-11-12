/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:51:21 by kkonkel           #+#    #+#             */
/*   Updated: 2023/11/08 17:56:06 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main()
{
	int a = 1;
	int b = 2;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
} */
