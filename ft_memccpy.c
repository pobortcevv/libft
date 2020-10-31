/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:24:26 by sabra             #+#    #+#             */
/*   Updated: 2020/10/31 23:18:50 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	stop;
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char*)dest;
	source = (unsigned char*)src;
	stop = (unsigned char)c;

	i = 0;
	if (destination[0] != '\0')
	{
		return (NULL);
	}
	while (i < n)
	{
		if (source[i] != stop)
		{
			destination[i] = source[i];
		}
		else
		{
			break;
		}
		i++;
	}
	return (destination);
}

#include <stdio.h>
int main (void)
{
   // Массив источник данных
   unsigned char src[15]="1234657890";

   // Массив приемник данных
   unsigned char dst[15]="1";

   // Копируем данные из массива src в массив dst
   ft_memccpy (dst, src,'5', 10);

   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);

   return 0;
}