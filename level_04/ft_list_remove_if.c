/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:47:31 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:28:13 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funcion cmp de prueba
int	cmp(void *data, void *data_ref)
{
	int	*i;
	int	*j;

	i = data;
	j = data_ref;
	if (*i == *j)
		return (0);
	return (1);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*lst;
	t_list	*tmp;
	int		i;
	int		j;

	lst = *begin_list;
	tmp = *begin_list;
	i = 0;
	j = 0;
	while (lst != NULL)
	{
		if ((*cmp)(lst->data, data_ref) == 0)
		{
			if (j == 0)
				*begin_list = lst->next;
			else
			{
				tmp->next = lst->next;
				free(lst);
				lst = tmp;
				i = 0;
			}
		}
		if (i > 0)
			tmp = tmp->next;
		if (lst != NULL)
			lst = lst->next;
		i++;
		j++;
	}
}

//main prueba
void	print_list(t_list **begin_list)
{
	t_list	*cur;

	cur = *begin_list;
	while (cur != 0)
	{
		printf("%s\n", cur->data);
		cur = cur->next;
	}
}

int	main(void)
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, strdd, strcmp);
	print_list(begin_list);
}
