/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:49:13 by ftothmur          #+#    #+#             */
/*   Updated: 2019/04/28 12:54:34 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function returns the Nth element of the list. In case of error, it
** returns a null pointer.
*/

t_list	*ft_lstat(t_list *head, size_t nbr)
{
	if (!head || !nbr)
		return (NULL);
	while (head && nbr--)
		head = head->next;
	if (!head)
		return (NULL);
	return (head);
}
