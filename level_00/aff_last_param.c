/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:09:57 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:11:28 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*aux;

	i = 0;
	aux = argv[argc - 1];
	if (argc > 1)
	{
		while (aux[i] != '\0')
		{
			write(1, &aux[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
