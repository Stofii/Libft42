/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:06:00 by dstopfer          #+#    #+#             */
/*   Updated: 2022/04/03 17:08:52 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*counter;

	if (!del || !(*lst))
		return ;
	while (*lst != NULL)
	{
		counter = (*lst)->next;
		ft_lstdelone(*lst, (del));
		*lst = counter;
	}
	counter = (NULL);
}
