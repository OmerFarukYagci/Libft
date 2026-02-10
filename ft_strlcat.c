/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:59:28 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/10 16:35:25 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sum;
	size_t	d_lng;
	size_t	s_lng;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	d_lng = ft_strlen(dst);
	s_lng = ft_strlen(src);
	if (size <= d_lng)
		return (s_lng + size);
	sum = d_lng + s_lng;
	while (src[i] && size > (d_lng + 1))
	{
		dst[d_lng] = src[i];
		d_lng++;
		i++;
	}
	dst[d_lng] = '\0';
	return (sum);
}
