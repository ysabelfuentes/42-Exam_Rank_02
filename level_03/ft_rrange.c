/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:11:38 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:11:38 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_lengint(int start, int end)
{
	int total_int;

	total_int = end - start;
	if (total_int < 0)
		return (-total_int);
	return (total_int);
}

int	*ft_range(int start, int end)
{
	int *str_int;
	int i;

	printf(" lenght %d \n", ft_lengint(start, end));
	str_int = (int *)malloc(sizeof(int) * (ft_lengint(start, end) + 1));
	if (!str_int)
		return (NULL);
	i = 0;
	while (end > start)
	{
		str_int[i] = end;
		printf(" num1 =  %d \n", str_int[i]);
		end--;
		i++;
	}
	str_int[i] = end;
	printf(" num f1 =  %d \n", str_int[i]);
	while (end < start)
	{
		str_int[i] = end;
		printf(" num2 =  %d \n", str_int[i]);
		end++;
		i++;
	}
	str_int[i] = end;
	printf(" num f2 =  %d \n", str_int[i]);
	return (str_int);
}

int	main(void)
{
	int start;
	int end;
	int i;
	int *str;

	start = 0;
	end = -3;
	str = ft_range(start, end);
	i = 0;
	while (i < (ft_lengint(start, end) + 1))
	{
		printf(" %d ", str[i]);
		i++;
	}
	return (0);
}
