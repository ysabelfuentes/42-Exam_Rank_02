/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:17:54 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:39:43 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
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

	if (argc == 2)
	{
		i = ft_len(argv[1]);
		while (i >= 0)
		{
			if (argv[1][i] == ' ' || i == 0)
			{
				j = i + 1;
				if (i == 0)
					j--;
				while (argv[1][j] != ' ' && argv[1][j] != '\0')
				{
					write(1, &argv[1][j], 1);
					j++;
				}
				if (i != 0)
					write(1, " ", 1);
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
