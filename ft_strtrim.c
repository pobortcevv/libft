/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:06:42 by sabra             #+#    #+#             */
/*   Updated: 2020/11/04 18:12:15 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	i = 0;
	while (ft_strchr(set, s1[i]) && i < ft_strlen(s1))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i >= 0)
		i--;
	end = i;
	if (start > end)
	{
		return ((char *)s1);
	}
	str = (char *)malloc((end - start) + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
