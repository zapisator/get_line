/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstforeach.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:09:56 by ftothmur          #+#    #+#             */
/*   Updated: 2019/05/20 15:14:39 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstforeach_if(t_list *node, void (*fptr)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*curr;

	curr = node;
	if (!node || !fptr || !data_ref || !cmp)
		return ;
	while (curr)
	{
		if ((*cmp)(curr->content, data_ref))
			(*fptr)(curr->content);
		curr = curr->next;
	}
	return ;
}
