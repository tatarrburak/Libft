/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: butatar <butatar@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:09:00 by butatar           #+#    #+#             */
/*   Updated: 2023/07/14 08:42:47 by butatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[h] != '\0')
	{
		n = 0;
		while (s1[h + n] == s2[n] && (h + n) < len)
		{
			if (s1[h + n] == '\0' && s2[n] == '\0')
				return ((char *)&s1[h]);
			n++;
		}
		if (s2[n] == '\0')
			return ((char *)s1 + h);
		h++;
	}
	return (0);
}
