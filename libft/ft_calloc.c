/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:27:00 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/11 14:37:31 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*c;
	size_t	i;

	i = 0;
	c = malloc(size * count);
	if (!c)
		return (NULL);
	while (i < (count * size))
	{
		c[i] = '\0';
		i++;
	}
	return ((void *)c);
}
