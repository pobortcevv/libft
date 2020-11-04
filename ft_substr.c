/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:52:26 by sabra             #+#    #+#             */
/*   Updated: 2020/11/04 15:30:51 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	char	*string;

	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(1);
		substr[0] = '\0';
		return (substr);
	}
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	string = (char *)s;
	i = 0;
	while (len-- && string[start])
	{
		substr[i] = string[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
