/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:55:03 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/31 18:48:59 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	total_words(char const *str, char ch)
{
	size_t	i;
	size_t	m;

	i = 0;
	m = 0;
	if ((str[0] != ch) && (str[0] != '\0'))
		m++;
	while (str[i])
	{
		if (str[i] == ch && (str[i + 1] != ch) && (str[i + 1] != '\0'))
			m++;
		i++;
	}
	return (m);
}

static void	all_free(char **ar, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(ar[i]);
		i++;
	}
	free(ar);
}

char	**ft_split(char const *s, char c)
{
	size_t	tw;
	char	**arrays;

	if (s == NULL)
		return (NULL);
	tw = total_words(s, c);
	arrays = malloc(sizeof(char *) * (tw + 1));
	if (arrays == NULL)
		return (NULL);
	arrays[tw] = NULL;

	return (arrays);
}

#include <stdio.h>

int main()
{
	
}
