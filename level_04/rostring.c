/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:05:44 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/25 16:05:44 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
	char **str_spliter;
	char *string;
	int i;
	int j;
	int count;

	str_spliter = (char **)malloc(sizeof(char *) * 1000);
	if (!str_spliter)
		return(NULL);
	i=0;
	count = 0;
	while(str[i] != '\0')
	{
		while(str[i] < 32 && str[i] != '\0')
			i++;
		if (str[i] > 32)
		{
			j = 0;
			string = (char *)malloc(sizeof(char) * 1000);
			if (!string)
				return(NULL);
			while(str[i] > 32 && str[i] != '\0')
			{
				string[j] = str[i];
				j++;
				i++;
			}
			string[j] = '\0';
			str_spliter[count] = string;
			count++;
		}
		else
			i++;
	}
	str_spliter[count] = NULL;
	return(str_spliter);
}

int	main(int argc, char **argv)
{
    char ** srt_split;
    int count;

	if (argc == 2)
    {
        count = 0;
        srt_split = ft_split(argv[1]);
        while(srt_split[count])
            count++;
        if (count > 0)
        {
            count = 1;
            while(srt_split[count])
            {
                printf("%s",srt_split[count]);
                printf(" ");
                count++;
            }
            printf("%s",srt_split[0]);
        }
    }
    printf("\n");
    return(0);
}
