/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:14:22 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/12 15:03:47 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	length;
	size_t	i;

	i = 0;
	length = ft_strlen(s1) + 1;
	s = malloc(length * sizeof(char));
	if (!s)
		return (NULL);
	while (s1[i]) 
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
