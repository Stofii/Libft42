/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:34:07 by dstopfer          #+#    #+#             */
/*   Updated: 2022/03/25 18:40:05 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (len)
	{
		if (str[len] == c)
			return ((char *)(str + len));
		len--;
	}
	if (str[len] == (char)c)
		return ((char *)(str + len));
	return (NULL);
}
