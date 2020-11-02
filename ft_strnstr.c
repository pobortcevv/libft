/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:25:08 by sabra             #+#    #+#             */
/*   Updated: 2020/11/02 16:59:51 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strnstr(const char *str_a, const char *str_b, size_t len)
{
	size_t	i;
	size_t	occ;
	size_t	little_i;
	char	*big;
	char	*little;

	i = 0;
	big = (char *)str_a;
	little = (char *)str_b;
	if (ft_strlen(little) == 0)
		return(big);
	while (i < len)
	{
		little_i = 0;
		if (big[i] == little[little_i])
		{
			occ = i;
			while (big[i] == little[little_i] && i < len)
			{
				i++;
				little_i++;
			}
			if (little_i == ft_strlen(little))
				return (&big[occ]);
			else
				i = occ;
		}
		i++;
	}
	return (NULL);
}
