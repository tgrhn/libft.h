/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:17:38 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/13 11:20:07 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_control(char control, char const *set)
{
	while (*set)
	{
		if (control == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_control(s1[start], set))
		start++;
	while (end > start && ft_control(s1[end - 1], set))
		end--;
	p = malloc(sizeof(char) * (end - start + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (start < end && s1[start])
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
