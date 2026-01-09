/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:15:17 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/09 13:33:13 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

#include <stdio.h>


int main()
{
	char dst[2];
	const char src[]="Hello";

	printf("%zu", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%c", '\n');
	printf("%s", dst);
}

//0,1 ve 2 değerleri için denendi.