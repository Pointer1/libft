/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:31:33 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/09 16:31:35 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char*)src;
	d = (char*)dst;
	while ((i < len) && s[i])
	{
		d[i] = s[i];
		i++;
	}
	while (i < len)
	{
		d[i] = '\0';
		i++;
	}
	return (dst);
}
