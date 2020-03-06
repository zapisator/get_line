/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 13:48:43 by ftothmur          #+#    #+#             */
/*   Updated: 2019/05/23 23:53:11 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** It realy gets an absolute value of input value.
** Works only to 2^31 - 1 (or till UINT_MAX / 2 - 1).
*/

int	ft_abs(int x)
{
	return (x < 0 ? -x : x);
}
