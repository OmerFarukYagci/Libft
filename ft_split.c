/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:55:03 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/30 19:30:43 by omyagci          ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int		tw;
	char	**arrays;

	tw = total_words(s, c);
	arrays = malloc();
	
}

#include <stdio.h>

int main()
{
	printf("%d", total_words(" abc ", ' '));
}
