/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 14:57:57 by sabra             #+#    #+#             */
/*   Updated: 2020/07/21 11:54:06 by sabra            ###   ########.fr       */
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
	if (str[i] == '-' || str[i] == '+')
	{
		while (str[i] == '-' || str[i] == '+')
		{
			i++;
		}
	}
	return (i);
}

int		count_min(char *str)
{
	int i1;
	int i;
	int am;

	am = 0;
	i1 = 0;
	i = spaces(str, i1);
	if (str[i] == '-' || str[i] == '+')
	{
		while (str[i] == '-')
		{
			i++;
			am++;
		}
	}
	return (am);
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
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = (res * 10) + str[i] - '0';
			i++;
		}
	}
	countm = count_min(str);
	if (countm % 2 != 0)
	{
		res = -res;
	}
	return (res);
}
