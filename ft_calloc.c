/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:48:42 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/30 12:24:29 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, nmemb * size);
	return (pt);
}
