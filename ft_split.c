/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:55:03 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/30 17:45:32 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	total_words(char const *str, char ch)
{
	size_t	i;
	size_t	m;

	i = 0;
	m = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == ch && (str[i + 1] != ch) && (str[i + 1] != '\0'))
			m++;
		i++;
	}
	if (str[i] == ch)
		m++;
	return (m);
}

char	**ft_split(char const *s, char c)
{

}

#include <stdio.h>

int main()
{
	printf("%d", total_words("  1-1-2-~1,1:1  ", ""));
}
