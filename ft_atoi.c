/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 14:57:57 by sabra             #+#    #+#             */
/*   Updated: 2020/11/03 21:02:46 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		spaces(char *str, int i)
{
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		{
			i++;
		}
	}
	return (i);
}

int		stat(char *str, int i)
{
	int count_minus;
	int count_plus;

	count_minus = 0;
	count_plus = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			count_minus++;
		}
		else
		{
			count_plus++;
		}
		i++;
	}
	if (count_minus > 1 ||count_plus > 1 || 
		(count_plus == 1 && count_minus > 0))
	{
		return (-1);
	}
	return (i);
}

int		count_min(char *str)
{
	int i1;
	int i;
	int amount;

	amount = 0;
	i1 = 0;
	i = spaces(str, i1);
	if (str[i] == '-')
	{
		while (str[i] == '-')
		{
			i++;
			amount++;
		}
	}
	return (amount);
}

int		ft_atoi(char *str)
{
	int countm;
	int i;
	int res;

	i = 0;
	countm = 0;
	res = 0;
	i = spaces(str, i);
	i = stat(str, i);
	if (i < 0)
		return (0);
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = (res * 10) + str[i] - '0';
			i++;
		}
		countm = count_min(str);
		if (countm % 2 != 0)
			res = -res;
		return (res);
	}
	return (0);
}
