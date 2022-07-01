/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:20:59 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:21:02 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str_num)
{
	int	i;
	int	result;
	int	n;

	i = 0;
	result = 0;
	n = 1;
	if (str_num[i] == '-')
	{
		n *= -1;
		i++;
	}
	while (str_num[i] != '\0' && str_num[i] >= '0' && str_num[i] <= '9')
	{
		result = (result * 10) + str_num[i] - '0';
		i++;
	}
	return (result * n);
}

int	main(int argc, char **argv)
{
	int	num;
	int	i;

	if (argc == 2)
	{
		i = 2;
		num = ft_atoi(argv[1]);
		if (num == 1)
			printf("1");
		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num != i)
					printf("*");
				num /= i;
				i--;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
