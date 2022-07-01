/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:26:20 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:26:20 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *str = argv[1];
	if (argc == 2)
	{
		while (*str != '\0')
		{
			if (*str == '_')
			{
				++str;
				*str = *str - 32;
			}
			write(1, str, 1);
			++str;
		}
	}
	write(1, "\n", 1);
	return (0);
}
