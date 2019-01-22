/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:18:36 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/14 14:18:38 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;
	size_t	s;

	if (!*needle)
		return ((char *)haystack);
	h = (char*)haystack;
	n = (char*)needle;
	s = ft_strlen(needle);
	while (*h != '\0')
	{
		if (*h == *n)
		{
			if (ft_strncmp(h, n, s) == 0)
				return (h);
		}
		h++;
	}
	return (NULL);
}
