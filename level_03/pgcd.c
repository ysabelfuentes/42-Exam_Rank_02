/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:12:42 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:12:42 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//maximo comun divisor
unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int i, pgcd;

	i = 1;
	pgcd = 0;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			pgcd = i;
		i++;
	}
	return (pgcd);
}

int	main(void)
{
    printf(" mcd is = %u\n", pgcd(20, 40));
	return (0);
}
