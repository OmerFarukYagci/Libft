/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:28:49 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/29 16:06:00 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pt;
	size_t			i;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pt[i] = '\0';
		i++;
	}
}
