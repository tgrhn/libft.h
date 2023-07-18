/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:50:44 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/13 11:56:56 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destination;
	char	*source;

	i = 0;
	if (dest == src)
		return (NULL);
	destination = (char *)dest;
	source = (char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
