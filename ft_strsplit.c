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
	int		w;
	char	*s1;

	s1 = (char*)s;
	w = 0;
	while (*s1)
	{
		if (*s1 != c)
			w++;
		while (*s1 && *s1 != c)
			s1++;
		while (*s1 && *s1 == c)
			s1++;
	}
	return (w);
}

static int		ft_strlen_to_d(char const *s, char c)
{
	int		i;
	char	*s1;

	s1 = (char*)s;
	i = 0;
	while (*s1 && *s1 != c)
	{
		i++;
		s1++;
	}
	return (i);
}

static char		**ft_write(char const *s, char c, char **dest, int count)
{
	int		i;
	char	*s1;

	s1 = (char*)s;
	i = 0;
	while (*s1 && i < count)
	{
		while (*s1 == c)
			s1++;
		if (*s1 && *s1 != c)
		{
			if (!(dest[i] = ft_strsub(s1, 0, ft_strlen_to_d(s1, c))))
				return (NULL);
			i++;
		}
		while (*s1 && *s1 != c)
			s1++;
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
