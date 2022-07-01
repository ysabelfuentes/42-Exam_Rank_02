/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:42:31 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/26 15:42:31 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}


int main(void)
{
   const char str1[] = "hola que tal";
   const char str2[] = "hola como estas";
   int ret;
   int ret1;

   ret = strspn(str1, str2);
   ret1 = ft_strspn(str1, str2);
   
   if(ret) {
      printf("First matching character: %d\n", ret);
   } else {
      printf("Character not found ret \n");
   }

   if(ret1) {
      printf("First matching character: %d\n", ret1);
   } else {
      printf("Character not found ret1 \n");
   }
    return(0);
}