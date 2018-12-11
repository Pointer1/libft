/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:02:41 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/14 15:02:44 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	ln;
	size_t	i;

	h = (char*)haystack;
	n = (char*)needle;
	ln = ft_strlen(n);
	i = 0;
	if (h == n || *n == '\0')
		return (h);
	while (i++ <= (len - ln) && *h != '\0' && len != 0)
	{
		if ((ft_strncmp(h, n, ln) == 0) && ln < len)
			return (h);
		h++;
	}
	return (0);
}
