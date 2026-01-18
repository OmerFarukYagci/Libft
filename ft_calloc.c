/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:48:42 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/18 17:03:44 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t total, size_t size)
{
	void	*pt;

	pt = malloc(total * size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, total * size);
	return (pt);
}
