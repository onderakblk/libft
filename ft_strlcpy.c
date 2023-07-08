/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <oakbulak@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:27:55 by oakbulak          #+#    #+#             */
/*   Updated: 2023/07/04 16:46:40 by oakbulak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	k = 0;
	while (src[k] != '\0' && k < dstsize - 1)
	{
		dst[k] = src[k];
		k++;
	}
	dst[k] = '\0';
	return (i);
}
