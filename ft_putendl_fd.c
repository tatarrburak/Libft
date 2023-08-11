/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: butatar <butatar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:07:15 by butatar           #+#    #+#             */
/*   Updated: 2023/07/14 08:47:49 by butatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	a;

	i = 0;
	a = 10;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write(fd, &a, 1);
}
