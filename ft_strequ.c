/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:59:14 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/26 16:59:16 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	r;

	if (!s1 || !s2 || (!*s1 && *s2) || (*s1 && !*s2))
		return (0);
	if (!*s1 && !*s2)
		return (1);
	if (ft_strcmp(s1, s2) == 0)
		r = 1;
	else
		r = 0;
	return (r);
}
