/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:43:03 by sabra             #+#    #+#             */
/*   Updated: 2020/11/02 22:38:21 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove (void *dest, const void *src, size_t n)
{
	size_t			i;
	char 	*destination;
	char 	*source;
	
	destination = (char *)dest;
	source = (char *)src;
	i = 0;
	if (ft_strlen(source) == 0)
	{
		return (destination);
	}
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return(destination);
}
