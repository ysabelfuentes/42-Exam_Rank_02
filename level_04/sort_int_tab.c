/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:32:04 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/22 12:52:21 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

int	main(void)
{
	int tab[6] = {6, 5, 4, 3, 2, 1};
	int i;

	sort_int_tab(tab, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d \n", tab[i]);
		i++;
	}
	return (0);
}