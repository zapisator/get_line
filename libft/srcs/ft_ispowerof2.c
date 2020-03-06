/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispowerof2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:17:36 by ftothmur          #+#    #+#             */
/*   Updated: 2019/04/19 13:56:18 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The predicate is valid if the given number is a power of two.
** As it uses bitwise operations it works with positive numbers within INT_MAX.
*/

int	ft_ispowerof2(int nbr)
{
	return (!!(nbr > 0 && !(nbr & (nbr - 1))));
}
