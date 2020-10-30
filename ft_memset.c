/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:54:23 by sabra             #+#    #+#             */
/*   Updated: 2020/10/30 18:03:07 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

int main()
{
	void *st = "iegunuvrbvujrbkrjngkjrn";
	printf("%s", ft_memset(st, 91, 12));
	return 0;
}