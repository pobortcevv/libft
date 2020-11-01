/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:56:03 by sabra             #+#    #+#             */
/*   Updated: 2020/11/01 16:37:02 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	int		last_index;
	size_t len;
	
	last_index = -1;
	str = (char *)s;
	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			last_index = i;
		}
		i++;
	}
	if (last_index != -1)
		return (&str[last_index]);
	else if ((char)c == str[len])
		return (&str[len]);
	return (NULL);
}
