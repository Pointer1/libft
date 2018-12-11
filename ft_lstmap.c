/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:19:47 by ykopiika          #+#    #+#             */
/*   Updated: 2018/12/06 18:19:50 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_a_f(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*r_f;
	t_list	*ret;

	r_f = f(lst);
	ret = ft_lstnew(r_f->content, r_f->content_size);
	if (!ret)
	{
		free(ret);
		ret = NULL;
	}
	return (ret);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*beg;
	t_list	*l;

	if (!f || !lst)
		return (NULL);
	beg = ft_lst_a_f(lst, &(*f));
	l = beg;
	while ((lst = lst->next))
	{
		l->next = ft_lst_a_f(lst, &(*f));
		if (!l->next)
			beg = NULL;
		l = l->next;
	}
	return (beg);
}
