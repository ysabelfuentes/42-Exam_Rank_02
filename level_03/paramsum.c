/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:54:40 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:05:34 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;

	(void)argv;
	argc--;
	if (argc == 0)
		write(1, "0", 1);
	while (argc > 0)
	{
		c = (argc % 10) + 48;
		write(1, &c, 1);
		argc = argc / 10;
	}
	write(1, "\n", 1);
	return (0);
}
