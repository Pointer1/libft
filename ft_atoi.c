/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:42:16 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/16 18:42:20 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char s)
{
	if (s == '\t' || s == ' ' || s == '\n' || s == '\v' ||
				s == '\f' || s == '\r')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	unsigned long int res;
	int	i;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0' && ft_check(str[i]))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (res > 4294967295 && sign == -1)
		return (0);
	else if (res > 4294967295 && sign == 1)
		return (-1);
	return (res * sign);
}
