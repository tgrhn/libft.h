/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:39:21 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/11 14:23:10 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	length;
	size_t	i;
	size_t	k;

	k = 0;
	i = 0;
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	c = malloc(length * sizeof(char));
	if (!c)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		c[i] = s1[i];
		i++;
	}
	while (i < length)
	{
		c[i] = s2[k];
		i++;
		k++;
	}
	return (c);
}
