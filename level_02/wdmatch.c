/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:49:43 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/22 17:49:44 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		count = 0;
		while (argv[1][i] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[2][j] == argv[1][i])
				{
					count++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (count == ft_strlen(argv[1]))
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
