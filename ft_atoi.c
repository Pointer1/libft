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

int	ft_atoi(const char *str)
{
	unsigned long int	res;
	int					i;
	int					sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0' && ft_check_sp(str[i]))
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
	if (res > 9223372036854775807 && sign == -1)
		return (0);
	else if (res > 9223372036854775807 && sign == 1)
		return (-1);
	return ((int)(res * sign));
}
