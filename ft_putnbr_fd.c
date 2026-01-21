/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omyagci <omyagci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:34:39 by omyagci           #+#    #+#             */
/*   Updated: 2026/01/21 04:11:24 by omyagci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;
	char	a;

	ln = n;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln = ln * -1;
	}
	if (ln <= 9)
	{
		a = ln + '0';
		write(fd, &a, 1);
	}
	else
	{
		ft_putnbr_fd(ln / 10, fd);
		ft_putnbr_fd(ln % 10, fd);
	}
}
