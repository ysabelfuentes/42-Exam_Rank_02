/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:44:03 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/22 17:44:16 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int				temp;
	unsigned int	i;

	i = 0;
	temp = 0;
	while (i < len)
	{
		if (tab[i] > temp)
			temp = tab[i];
		i++;
	}
	return (temp);
}

int	main(void)
{
	int	tab[5];

	tab[5] = {1, 2, 8, 4, 5};
	printf("%d", max(tab, 5));
	return (0);
}
