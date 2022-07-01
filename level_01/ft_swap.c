/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:20:31 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:20:32 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int	a;
	int	b;

	a = 2 + 48;
	b = 3 + 48;
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
}
