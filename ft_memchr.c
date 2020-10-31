/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:22:03 by sabra             #+#    #+#             */
/*   Updated: 2020/10/31 23:35:43 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			sought;
	unsigned char 	*source;

	sought = (char)c;
	source = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (source[i] == sought)
		{
			return (&source[i]);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int main (void)
{
   // Исходный массив
   unsigned char src[15]="1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = ft_memchr (src, '4', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]='!';

   // Вывод исходного массива
   printf ("src new: %s\n",src);

   return 0;
}