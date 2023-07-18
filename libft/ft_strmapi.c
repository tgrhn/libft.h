/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:01:16 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/13 10:45:25 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*c;

	i = 0;
	if (!s || !f)
		return (ft_strdup(""));
	c = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!c)
		return (NULL);
	while (s[i])
	{
		c[i] = (*f)(i, s[i]);
		i++;
	}
	c[i] = 0;
	return (c);
}
