/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:53:07 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/24 17:16:22 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_words(char *str)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	flag = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32)
			flag = 0;
		if (str[i] > 32 && str[i + 1] != '0' && flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_get_count_char(char *str, int i)
{
	int	count;

	count = 0;
	while (str[i] != ' ' && str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**str_spliter;
	char	*new_string;
	int		i;
	int		j;
	int		count_spliter;

	str_spliter = (char **)malloc(sizeof(char *) * (ft_count_words(str) + 1));
	if (!str_spliter)
		return (NULL);
	i = 0;
	count_spliter = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 32 && str[i + 1] != '\0')
		{
			j = 0;
			new_string = (char *)malloc(sizeof(char) * (ft_get_count_char(str,i) + 1));
			if (!new_string)
				return (NULL);
			while (str[i] > 32 && str[i + 1] != '\0')
			{
				new_string[j] = str[i];
				j++;
				i++;
			}
			new_string[j] = '\0';
			str_spliter[count_spliter] = new_string;
			count_spliter++;
		}
		else
			i++;
	}
	str_spliter[count_spliter] = NULL;
	return (str_spliter);
}

int	main(void)
{
	char t[] = "  split this   for    me ! ";
    //char t[] = "split this   me !";
    //char t[] = "split";
	int		pos;
	char	**res;
    
	pos = 0;
	res = ft_split(t);
	while (pos <= ft_count_words(t))
	{
		printf("posicion: (%d) = substring: %s\n", pos, res[pos]);
		pos++;
	}
	free(res);
	return (0);
}
