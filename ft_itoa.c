/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 23:00:15 by sabra             #+#    #+#             */
/*   Updated: 2020/11/06 00:01:51 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_num_convert(int n, char* str, size_t len)
{
	int i;

	i = len;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	else
	{
		len--;
		while (n > 0)
		{
			str[len] = (n % 10) + '0';
			n /= 10;
			len--;
		}
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		buff;

	len = 0;
	if (n <= 0)
	{
		len++;
		buff = (-1) * n;
	}
	else
		buff = n;
	while (buff > 0)
	{
		buff /= 10;
		len++;
	}
	if(!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	return (ft_num_convert(n, str, len));
}