#include "flood_fill.h"
#include <stdio.h>
#include <stdlib.h>

char	**make_area(char **zone, t_point size)
{
	char	**new;

	new = malloc(sizeof(char *) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return (new);
}

void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
		return ;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	printf(" entrando x = %d \n", begin.x);
	printf(" entrando y = %d \n", begin.y);
	printf(" caracter posicion tab[y][x] = %c \n", tab[begin.y][begin.x]);
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

int	main(void)
{
	t_point	size;
	char	**area;
	t_point	begin;

	size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
	area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
