/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:43:03 by sabra             #+#    #+#             */
/*   Updated: 2020/10/31 23:21:39 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove (void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char 	*destination;
	unsigned char 	*source;
	
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	
	
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return(source);
}

#include <stdio.h>
int main (void)
{
   // Исходный массив данных
   unsigned char src[10]="1234567890";

   // Вывод массива src на консоль
   printf ("src old: %s\n",src);

   // Копируем 3 байт
   memmove (&src[4], &src[3], 3);

   // Вывод массива src на консоль
   printf ("src new: %s\n",src);

   return 0;
}