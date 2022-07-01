/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:23:12 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 16:23:37 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";
	char *reverseAlphabeT = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				write(1, &reverseAlphabet[argv[1][i] - 'a'], 1);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				write(1, &reverseAlphabeT[argv[1][i] - 'A'], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}
