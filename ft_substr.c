/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:42:59 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/19 15:43:46 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sublen;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		sub = malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > slen - start)
		sublen = slen - start;
	else
		sublen = len;
	sub = malloc(sublen + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, sublen + 1);
	return (sub);
}
