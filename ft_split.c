/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <oakbulak@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:11:36 by oakbulak          #+#    #+#             */
/*   Updated: 2023/07/05 10:14:49 by oakbulak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	size_t	word_counter;

	word_counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{	
			word_counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word_counter);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	word_size;
	size_t	letter_counter;

	word_size = word_counter(s, c);
	dst = (char **)malloc((word_size + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			letter_counter = 0;
			while (*s && *s != c && ++letter_counter)
				s++;
			*dst++ = ft_substr(s - letter_counter, 0, letter_counter);
		}
	}
	*dst = 0;
	return (dst - word_size);
}
