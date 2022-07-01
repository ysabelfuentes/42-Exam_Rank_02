/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:24:36 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:24:36 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

   i=0;
	while (s1[i] != '\0')
	{
      j=0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char str1[] = "This is a string to search3 in4";
	const char str2[] = "sh";
   //const char str2[] = "43";
	char *ret;
	char *ret1;

	ret = strpbrk(str1, str2);
	ret1 = ft_strpbrk(str1, str2);

	if (ret)
	{
		printf("First matching character: %s\n", ret);
		printf("First matching character: %c\n", *ret);
	}
	else
	{
		printf("Character not found ret \n");
	}

	if (ret1)
	{
		printf("First matching character: %s\n", ret1);
		printf("First matching character: %c\n", *ret1);
	}
	else
	{
		printf("Character not found ret1 \n");
	}

	return (0);
}
