/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 18:03:32 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/11 13:37:16 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[i]);
	while (big[i] != '\0' && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && big[i + x] != '\0' && (i + x) < len)
			x++;
		if (little[x] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
