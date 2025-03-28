/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:30:35 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/25 18:32:18 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_node;
	t_list	*n_list;
	void	*tmp_con;

	if (!f || !del || !lst)
		return (NULL);
	f_node = 0;
	while (lst != NULL)
	{
		tmp_con = f(lst->content);
		n_list = ft_lstnew(tmp_con);
		if (n_list == NULL)
		{
			del(tmp_con);
			ft_lstclear(&f_node, del);
			lst = lst->next;
			return (0);
		}
		ft_lstadd_back(&f_node, n_list);
		lst = lst->next;
	}
	return (f_node);
}
