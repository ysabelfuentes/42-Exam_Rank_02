/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:13:37 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:13:37 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *nb)
{
	int i;
	int result;
	int n;

	i = 0;
	n = 1;
	result = 0;
	if (nb[i] == '-')
	{
		n *= -1;
		i++;
	}
	while (nb[i] != '\0')
	{
		result = (result * 10) + (nb[i] - '0');
		i++;
	}
	return (result * n);
}

void	ft_putnbr(int num)
{
	char c;
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		c = num + 48;
		write(1, &c, 1);
	}
}

void	ft_putstr_fd(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int nb;
	int i;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb > 0)
		{
			i = 1;
			while (i <= 9)
			{
				ft_putnbr(i);
				write(1, " x ", 3);
				ft_putnbr(nb);
				write(1, " = ", 3);
				ft_putnbr(nb * i);
				if (i < 9)
					write(1, "\n", 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
