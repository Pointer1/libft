/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:00:26 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/26 17:00:28 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_st(char const *s)
{
	int		sp;
	char	*s1;

	s1 = (char*)s;
	sp = 0;
	while (*s1 == ' ' || *s1 == '\t' || *s1 == '\n')
	{
		s1++;
		sp++;
	}
	return (sp);
}

int		ft_end(char const *s)
{
	int		sp;
	char	*s1;

	sp = 0;
	s1 = (char*)s;
	s1 += ft_strlen(s) - 1;
	while (*s1 == ' ' || *s1 == '\t' || *s1 == '\n')
	{
		s1--;
		sp++;
	}
	return (sp);
}

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		len;
	int		j;
	int		i;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if ((ft_st(s) == 0 && ft_end(s) == 0))
		return (ft_strdup(s));
	if ((ft_st(s) == ft_end(s)) && ft_end(s) == len)
		return (ft_strnew(len));
	res = ft_strnew(len - ft_st(s) - ft_end(s));
	if (!res)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (i < (len - ft_end(s)))
	{
		res[j] = s[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}
