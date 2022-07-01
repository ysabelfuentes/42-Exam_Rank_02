/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:27:15 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:27:28 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main(int argc, char **argv)
{
	int	sum;
	int	nb;
	int	i;

	sum = 0;
	i = 2;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb > 0)
		{
			while (i <= nb)
			{
				if (ft_is_prime(i))
					sum = sum + i;
				i++;
			}
		}
		else
			write(1, "0", 1);
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
