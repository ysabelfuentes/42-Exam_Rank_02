/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:59:57 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/07 16:43:40 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	aux;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i < (j - 1))
	{
		aux = str[i];
		str[i] = str[j - 1];
		str[j - 1] = aux;
		i++;
        j--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Hola Mundo";
	printf("%s", ft_strrev(str));
	return (0);
}
