/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 11:18:33 by sabra             #+#    #+#             */
/*   Updated: 2020/07/19 12:35:24 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				lenstr(char *str)
{
	unsigned int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				end;
	unsigned int	resu;

	i = 0;
	end = lenstr(dest);
	while (i < size)
	{
		dest[end + i] = src[i];
		i++;
	}
	resu = lenstr(dest);
	return (resu);
}
