/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:40:55 by dstopfer          #+#    #+#             */
/*   Updated: 2022/04/03 16:47:22 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*counter;
	int		size;

	if (lst == NULL)
		return (0);
	counter = lst;
	size = 0;
	while (counter != NULL)
	{
		size++;
		counter = counter->next;
	}
	return (size);
}
