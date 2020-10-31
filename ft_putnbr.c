/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 13:49:48 by sabra             #+#    #+#             */
/*   Updated: 2020/07/21 09:07:48 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x)
{
	char out;

	out = x + '0';
	write(1, &out, 1);
}

void	ft_putnbr(int nb)
{
	int nb1;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	nb1 = nb;
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb);
	}
	if (nb > 9)
	{
		ft_putnbr(nb1 / 10);
		ft_putnbr(nb1 % 10);
	}
}
