/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:03:08 by dstopfer          #+#    #+#             */
/*   Updated: 2022/03/26 18:09:49 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*r;
	size_t			i;

	r = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (*(r + i) == (unsigned char)c)
			return ((void *)(r + i));
		i++;
	}
	return (NULL);
}
