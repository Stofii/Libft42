/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:36:36 by dstopfer          #+#    #+#             */
/*   Updated: 2022/04/02 21:23:28 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_char(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;

	while (*s1 && check_char(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && check_char(set, s1[len]))
		len--;
	str = ft_substr(s1, 0, (len + 1));
	if (!(str))
		return (NULL);
	return (str);
}
