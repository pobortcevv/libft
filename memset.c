/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:54:23 by sabra             #+#    #+#             */
/*   Updated: 2020/10/30 17:48:22 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char	*str;

	i = 0;
	str = (char*)b;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
	return (str);
}
