/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:26:01 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:26:04 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	int	result;

	i = 8;
	result = 0;
	while (i > 0)
	{
		result = (result * 2) + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (result);
}

int	main(void)
{
	int	i;

	i = 37;
	printf("%d \n", reverse_bits(i));
	printf("%d", ((i >> 4) | (i << 4)));
	return (0);
}
