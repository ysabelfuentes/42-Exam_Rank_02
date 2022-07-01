/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:25:52 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:25:55 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char num)
{
	int	bin;

	bin = 128;
	while (bin > 0)
	{
		if (num >= bin)
		{
			write(1, "1", 1);
			num = num % bin;
		}
		else
			write(1, "0", 1);
		bin = bin / 2;
	}
}

int	main(void)
{
	//PrintInBinary(37);
	//printf("\n");
	print_bits(37);
	return (0);
}
