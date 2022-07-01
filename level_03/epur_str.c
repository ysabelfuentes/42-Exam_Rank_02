/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:58:23 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 15:43:10 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] > 32)
				write(1, &argv[1][i], 1);
			else
			{
				if (argv[1][i + 1] != '\0' && argv[1][i + 1] > 32)
					write(1, " ", 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
