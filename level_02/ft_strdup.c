/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:24:26 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/22 17:29:58 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_tmp;

	str_tmp = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!str_tmp)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str_tmp[i] = str[i];
		i++;
	}
	str_tmp[i] = '\0';
	return (str_tmp);
}
