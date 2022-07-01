/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UNION.C                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:04:52 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/06 19:26:27 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	validar_doble(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **arg)
{
	int		i;
	int		j;
	char	cadena[ft_strlen(arg[1]) + ft_strlen(arg[2])];

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (arg[1][i] != '\0')
		{
			if (validar_doble(cadena, arg[1][i]))
			{
				cadena[j] = arg[1][i];
				j++;
			}
			i++;
		}
		i = 0;
		while (arg[2][i] != '\0')
		{
			if (validar_doble(cadena, arg[2][i]))
			{
				cadena[j] = arg[2][i];
				j++;
			}
			i++;
		}
		cadena[j] = '\0';
		ft_putstr(cadena);
	}
	else
	{
		write(1, "\n", 1);
	}
}
