/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:55:56 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/13 11:22:16 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	if (ft_strlen(s) == 0 || len == 0 || start > ft_strlen(s))
		return (subs = ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while (i < len && i < ft_strlen(s) && s[start + i])
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
