/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:11:05 by yfuentes          #+#    #+#             */
/*   Updated: 2022/06/27 17:11:10 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*list;

	list = begin_list;
	count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}
