/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:35:02 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/22 17:35:04 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(-8));
	printf("%d\n", is_power_of_2(7));
	printf("%d\n", is_power_of_2(6));
	printf("%d\n", is_power_of_2(3));
	return (0);
}
