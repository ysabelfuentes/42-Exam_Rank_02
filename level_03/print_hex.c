/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:12:57 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:12:57 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	printf("%d \n", result);
	return (result);
}

void	ft_print_hex(int num)
{
	char n;

	if (num >= 16)
	{
		ft_print_hex(num / 16);
		ft_print_hex(num % 16);
	}
	else
	{
		if (num <= 9)
			n = (num + '0');
		else
			n = (num - 10 + 'a');
		write(1, &n, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_atoi(argv[1]));
	return (0);
}
