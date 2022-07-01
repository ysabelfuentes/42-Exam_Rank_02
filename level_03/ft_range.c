/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:11:17 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:11:18 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_len(int start, int end)
{
	int	count;

	count = start - end;
	if (count < 0)
		count *= -1;
	return (count);
}

int	*ft_range(int start, int end)
{
	int	*str_int;
	int	i;

	str_int = (int *)malloc(sizeof(int) * ft_str_len(start, end) + 1);
	if (!str_int)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str_int[i++] = start;
		start++;
	}
	str_int[i] = start;
	while (start >= end)
	{
		str_int[i++] = start;
		start--;
	}
	return (str_int);
}

int	main(void)
{
	int	*str;
	int	i;

	i = 0;
	str = ft_range(0, -3);
	while (i < ft_str_len(0, -3) + 1)
	{
		printf("%d", str[i]);
		i++;
	}
	return (0);
}
