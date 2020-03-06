/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:20:09 by ftothmur          #+#    #+#             */
/*   Updated: 2019/05/23 22:37:03 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Except in cases of errors with memory allocation in the heap, this function
** only in two cases returns a non-zero result: when all parameters are greater
** than zero, or the first two are zero, and the other two are not. Uses
** realloc. In the absence of the first two parameters, it simply creates a
** place in memory for the second parameter, as if it were a call to malloc,
** and copies it to this place. Then the memory for the third argument is freed.
**
**	Returns a pointer to the allocated memory, available in case of success or
** not.
*/

void	*ft_memjoin(void *buf1, size_t size1, void *buf2, size_t size2)
{
	void *pool;

	ft_putstr("we are in memjoin\n");
	pool = ft_realloc(buf1, size1, size1 + size2);
	ft_putstr("realloc is good\n");
	if (pool)
		(void)ft_memcpy((void *)((char *)pool + size1), buf2, size2);
	ft_memdel(&buf2);
	return (pool);
}
