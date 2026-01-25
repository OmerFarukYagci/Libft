/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:58:00 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/24 22:22:18 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*new;

	if (s == NULL || f == NULL)
		return (NULL);
	new = malloc(ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		new[index] = f(index, s[index]);
		index++;
	}
	new[index] = '\0';
	return (new);
}
