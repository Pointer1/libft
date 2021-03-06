/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sp_end.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 17:48:23 by ykopiika          #+#    #+#             */
/*   Updated: 2018/12/12 17:48:25 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sp_end(char const *s)
{
	int		sp;
	char	*s1;

	if (!s)
		return (0);
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
