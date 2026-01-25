/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:02:35 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/24 16:10:22 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	node;

	if (lst == NULL)
		return (0);
	node = 0;
	while (lst)
	{
		lst = lst -> next;
		node++;
	}
	return (node);
}
