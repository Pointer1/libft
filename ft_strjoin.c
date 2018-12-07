/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:00:12 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/26 17:00:15 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wr(char const *s1, char const *s2, char *res)
{
	int i;

	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res = ft_strcat(res, s2);
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = ft_strnew(len_s1 + len_s2);
	if (!res)
		return (NULL);
	res = ft_wr(s1, s2, res);
	return (res);
}