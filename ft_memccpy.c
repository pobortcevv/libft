/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:24:26 by sabra             #+#    #+#             */
/*   Updated: 2020/11/01 14:04:13 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	stop;
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char*)dest;
	source = (unsigned char*)src;
	stop = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		if (source[i] != stop)
		{
			destination[i] = source[i];
		}
		else
		{
			destination[i] = source[i];
			break;
		}
		i++;
	}
	return (destination);
}
