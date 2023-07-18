/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42istanbul <42istanbul.com.tr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:09:15 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/07/04 11:30:20 by 42istanbu        ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src [i] != '\0' && i < (dstsize - 1))
		{
			dest [i] = src [i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
