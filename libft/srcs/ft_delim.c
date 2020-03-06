/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 13:53:56 by ftothmur          #+#    #+#             */
/*   Updated: 2019/05/26 18:31:50 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The function ft_delim() takes a pointer to the place 'line' where the result
** selecting the word from the string 'str' by the delimiter 'c' will be
** written.
*/

char	*ft_delim(char **line, char *str, char c)
{
	char	*top;
	char	*tip;
	int		ofset;

	if (!(top = str))
		return (NULL);
	ofset = 1;
	if (!(tip = ft_strchr(top, c)))
	{
		tip = top + ft_strlen(top);
		ofset = 0;
	}
	if (!(*line = ft_strsub(str, top - str, tip - top)))
		return (NULL);
	return (!ofset || !*(tip + 1) ? NULL : ++tip);
}
