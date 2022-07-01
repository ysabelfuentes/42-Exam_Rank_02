/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:33:06 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/07 18:41:41 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	letter;
	int		i;

	i = 0;
	(void)argc;
	while (argv[1][i] != '\0')
	{
		letter = argv[1][i];
		if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
		{
			letter = argv[1][i] - 32;
		}
		if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
		{
			letter = argv[1][i] + 32;
		}
		write(1, &letter, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
