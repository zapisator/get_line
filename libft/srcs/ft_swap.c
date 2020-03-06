/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:06:11 by ftothmur          #+#    #+#             */
/*   Updated: 2019/05/20 14:56:02 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *x, void *y, size_t size)
{
	unsigned char t;

	while (size-- > 0)
	{
		t = *(unsigned char *)x;
		*(unsigned char *)x++ = *(unsigned char *)y;
		*(unsigned char *)y++ = t;
	}
	return ;
}
