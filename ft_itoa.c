/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:01:04 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/26 17:01:06 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_n(int n)
{
	int r;

	if (n <= 0)
		r = 1;
	else
		r = 0;
	while (n)
	{
		r++;
		n /= 10;
	}
	return (r);
}

char	*ft_itoa(int n)
{
	char *r;
	long int	n1;

	r = ft_strnew(ft_n(n));
	n1 = (long int)n;
	if ( n == -2147483648)
		return(ft_strdup("-2147483648"));
	if (r != NULL)
	{
		if (n < 0)
			n1 *= -1;
		if (n == 0)
			*r = '0';
		while (*r && *r != '0')
			r++;
		while (n1 && --r)
		{
			*r = (char)((n1 % 10) + '0');
			n1 /= 10;
		}
		if(n < 0)
		{
			r--;
			*r = '-';
		}
	}
	return (r);
}
