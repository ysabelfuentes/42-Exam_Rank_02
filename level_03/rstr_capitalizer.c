/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:13:07 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:13:07 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int count_arg;
	int i;

	if (argc > 1)
	{
		count_arg = 1;
		while (count_arg < argc)
		{
			i = 0;
			while (argv[count_arg][i] != '\0')
			{
				//printf("i = %d \n",i);
				if ((argv[count_arg][i] >= 'a' && argv[count_arg][i] <= 'z') && ((argv[count_arg][i
							+ 1] == ' ') || (argv[count_arg][i + 1] == '\0')))
					argv[count_arg][i] -= 32;
				else if ((argv[count_arg][i] >= 'A' && argv[count_arg][i] <= 'Z') && ((argv[count_arg][i
								+ 1] != ' ') && (argv[count_arg][i
								+ 1] != '\0')))
					argv[count_arg][i] += 32;
				write(1, &argv[count_arg][i], 1);
				i++;
			}
			write(1, "\n", 1);
			count_arg++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
