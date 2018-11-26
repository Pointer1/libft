/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 19:24:46 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/04 19:24:49 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	s = (char*)src;
	d = (char*)dst;
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
