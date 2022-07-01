/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:21:41 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:21:41 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pos_alpha(char letter)
{
	char *alphabethmin = "abcdefghijklmnopqrstuvwxyz";
	char *alphabethmay = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	i = 0;
	while (alphabethmin[i] != '\0' && alphabethmay[i] != '\0')
	{
		if (letter == alphabethmin[i] || letter == alphabethmay[i])
			return (i);
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int count;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
			{
				j = 1;
				count = pos_alpha(argv[1][i]) + 1;
				while (j <= count)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
