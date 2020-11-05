/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:39:08 by sabra             #+#    #+#             */
/*   Updated: 2020/11/05 17:34:27 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	start;
	char	*word;
	char	**result;

	i = 0;
	result = (char **)malloc(sizeof(char *) * (ft_count(s, c)) + 1);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c)
				i++;
			len = i;
			word = ft_substr(s, start, len);
			*result = word;
		}
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s = "ufbeuhb1eheruh1efi1eihiehi1";
// 	int i;
// 	char **str;

// 	str = ft_split(s, '1');
// 	while (str)
// 	{
// 		printf("%s\n", *str);
// 		str++;
// 	}
// }
