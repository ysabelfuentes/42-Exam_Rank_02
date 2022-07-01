/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:14:24 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/05 21:36:06 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int	max;

	max = ft_length(str) - 1;
	while (max >= 0)
	{
		write(1, &str[max], 1);
		max--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(void)
{
	printf("\n");
	printf("%s", ft_rev_print("xhke7"));
}
