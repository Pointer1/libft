/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:00:38 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/26 17:00:40 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wc(char const *s, char c)
{
	int w;

	w = 0;
	while (*s)
	{
		if (*s != c)
			w++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (w);
}

static int		ft_strlen_to_d(char const *s, char c)
{
	int i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static char		**ft_write(char const *s, char c, char **dest, int count)
{
	int i;

	i = 0;
	while (*s && i < count)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(dest[i] = ft_strsub(s, 0, ft_strlen_to_d(s, c))))
				return (NULL);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	dest[i] = NULL;
	return (dest);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dest;
	int		count;

	if (!s)
		return (NULL);
	count = ft_wc(s, c);
	dest = (char**)malloc(sizeof(char*) * (count + 1));
	if (!dest)
		return (NULL);
	dest = ft_write(s, c, dest, count);
	return (dest);
}
