/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 11:41:26 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/05 11:41:26 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(long nbr)
{
	int	len;
    
    len = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int	i;

	n = nb;
	i = len(n);
    printf(" i len(n) = %d \n", i);
	if(!(str = (char *)malloc(i + 1)))
		return(0);
	str[i--] = '\0';
	if (n == -2147483648)
		return ("-2147483648\0");
    if (n == 0)
	{
		str[0] = '0';
		return(str);
	}
	if(n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483647));
    return(0);
}