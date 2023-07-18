/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarakad <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:15:59 by tkarakad          #+#    #+#             */
/*   Updated: 2023/07/13 10:48:36 by tkarakad         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_intlen(long n)
{
	int	length;

	length = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_str(char *p, long n, int i)
{
	long	number;
	char	*x;
	size_t	reminder;

	x = p;
	if (n < 0)
		number = -n;
	if (n > 0)
		number = n;
	x[i] = '\0';
	i--;
	while (number > 0)
	{
		reminder = number % 10;
		number = number / 10;
		x[i--] = reminder + '0';
	}
	if (n < 0)
		x[0] = '-';
	return (x);
}

char	*ft_itoa(int n)
{
	size_t	length;
	size_t	i;
	char	*p;

	if (n == 0)
		return (p = ft_strdup("0"));
	if (n < 0)
		length = ft_intlen(n) + 2;
	if (n > 0)
		length = ft_intlen(n) + 1;
	i = length - 1;
	p = malloc(length * sizeof(char));
	if (!p)
		return (NULL);
	p = ft_str(p, n, i);
	return (p);
}
