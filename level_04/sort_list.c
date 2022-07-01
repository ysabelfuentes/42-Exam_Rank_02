/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:12:48 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/22 12:29:27 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;
	int		swap;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

int	main(void)
{
	t_list *lst;

	lst = (t_list *)malloc(sizeof(t_list));
	lst->data = 20;
	lst->next = (t_list *)malloc(sizeof(t_list));
	lst->next->data = 5;
	lst->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->data = -2;
	lst->next->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->next->data = 0;
	lst->next->next->next->next = NULL;

	lst = sort_list(lst, ascending);

	while (lst != NULL)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
	free(lst);
	return (0);
}