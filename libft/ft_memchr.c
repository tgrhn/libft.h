/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:36:41 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/12 15:05:53 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*d;
	size_t	i;

	d = (char *) s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
