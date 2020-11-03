/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:40:10 by sabra             #+#    #+#             */
/*   Updated: 2020/11/03 21:07:57 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*sym1;
	unsigned char			*sym2;
	size_t			i;
	int				bytes;

	i = 0;
	bytes = 0;
	sym1 = (unsigned char *)s1;
	sym2 = (unsigned char *)s2;
	while (i < n)
	{
		if (sym1[i] > sym2[i])
		{
			bytes++;
		}
		else if (sym1[i] < sym2[i])
		{
			bytes--;
		}
		i++;
	}
	if (bytes > 0)
	{
		return (1);
	}
	else if (bytes < 0)
	{
		return (-1);
	}
	return (0);
}