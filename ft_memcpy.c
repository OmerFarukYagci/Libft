/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:53:25 by omyagci           #+#    #+#             */
/*   Updated: 2026/02/02 17:33:08 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;
	size_t				i;

	if (dest == src || n == 0)
		return (dest);
	dp = (unsigned char *)dest;
	sp = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dp[i] = sp[i];
		i++;
	}
	return (dest);
}
