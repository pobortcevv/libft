/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 11:18:33 by sabra             #+#    #+#             */
/*   Updated: 2020/11/03 12:36:12 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			end;
	char			*source;

	i = 0;
	source = (char *)src;
	end = ft_strlen(dest);
	if (ft_strlen(source) == 0)
		return (ft_strlen(dest));
	while (i < size)
	{
		dest[end] = src[i];
		end++;
		i++;
	}
	dest[end] = '\0';
	return (ft_strlen(dest));
}
