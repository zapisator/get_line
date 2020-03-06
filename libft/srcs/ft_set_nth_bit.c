/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_nth_bit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 13:08:00 by ftothmur          #+#    #+#             */
/*   Updated: 2019/05/20 14:58:59 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Replaces the n-th bit (the first is considered to be zero) by 1.
** Works only to 2^31 - 1 (or till UINT_MAX / 2 - 1).
*/

int	ft_set_nth_bit(int x, int n)
{
	return (x |= (1 << n));
}
