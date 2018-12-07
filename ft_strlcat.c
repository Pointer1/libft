/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:05:19 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/13 12:05:22 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;

// 	i = 0;
// 	if (ft_strlen(dst) > dstsize)
// 		return (dstsize + ft_strlen(src));
// 	while (dst[i] != '\0')
// 		i++;
// 	if (dstsize > 0)
// 		ft_strncpy(&dst[i], src, dstsize);
// 	return (ft_strlen(dst) + ft_strlen(src));
// }

// v 2.0
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (ft_strlen(dst) > dstsize)
		len = dstsize;
	else
		len = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	if (dstsize > i)
		ft_strncat(&dst[i], src, dstsize - i -1);
	return (len + ft_strlen(src));
}