/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:12:29 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:12:29 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//minimo comun multiplo
unsigned int	ft_lcm(unsigned int a, unsigned int b)
{
	unsigned int i, lcm;

	i = 1;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			lcm = i;
		i++;
	}
	return ((a * b) / lcm);
}

int	main(void)
{
	printf(" lcm is = %u\n", ft_lcm(0, 45));
	return (0);
}