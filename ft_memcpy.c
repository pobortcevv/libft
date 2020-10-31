/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:35:55 by sabra             #+#    #+#             */
/*   Updated: 2020/10/31 23:18:10 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


void *ft_memcpy (void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *destination;
	unsigned char *source;

	destination = dest;
	source = (unsigned char *)src;
	i = 0;
	if (destination[0] != '\0')
	{
		return (NULL);
	}
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
#include <stdio.h>
int main (void)
{
   // Массив источник данных
   char src[]="1234567";
 
   // Массив приемник данных
   char dst[20];

   // Копируем 6 байт из массива src в массив dst
   ft_memcpy (dst, src, 6);

   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);

   return 0;
}