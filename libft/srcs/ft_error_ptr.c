/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:18:53 by ftothmur          #+#    #+#             */
/*   Updated: 2019/05/16 21:49:42 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The function accepts int returning NULL. It is wrapper for ft_error().
*/

void	*ft_error_ptr(int unused)
{
	return ((void *)(ssize_t)(unused && NULL));
}
