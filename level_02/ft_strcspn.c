#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	int			len;
	int			lenght;
   	const char str1[] = "ABCDEF4960910";
   	const char str2[] = "9E";

	len = strcspn(str1, str2);
	lenght = strcspn(str1, str2);
	printf("First matched character is at %d\n", len);
	printf("First matched character is at %d\n", lenght);
	return (0);
}
