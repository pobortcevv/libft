/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:25:08 by sabra             #+#    #+#             */
/*   Updated: 2020/11/09 23:20:01 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[i] == '\0')
		return ((char*)big);
	while (len && *big != '\0')
	{
		if (*big == *little)
		{
			while (big[i] == little[i] && big[i] != '\0' && len--)
				i++;
			if (little[i] == '\0')
				return ((char*)big);
			i = 0;
		}
		big++;
		len--;
	}
	return (NULL);
}
