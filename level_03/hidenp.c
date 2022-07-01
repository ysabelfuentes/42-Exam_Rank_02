/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:12:17 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:12:17 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlenght(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int count;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		count = 0;
		while (argv[1][i] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					count++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (count == ft_strlenght(argv[1]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
