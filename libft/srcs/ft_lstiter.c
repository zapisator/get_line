/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:29:49 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/09 14:53:58 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Apply the function from the second argument for each node in the linked list,
** starting with the one passed in by the first argument.
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*thelst;
	t_list	*nxtlst;

	thelst = lst;
	if (lst && f)
	{
		while (thelst)
		{
			nxtlst = thelst->next;
			(*f)(thelst);
			thelst = nxtlst;
		}
	}
}
