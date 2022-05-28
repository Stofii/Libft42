/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:41:09 by dstopfer          #+#    #+#             */
/*   Updated: 2022/03/26 18:52:33 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*t1;
	char	*t2;
	size_t	i;

	t1 = (char *)s1;
	t2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return ((unsigned char)t1[i] - (unsigned char)t2[i]);
		i++;
	}
	return (0);
}
