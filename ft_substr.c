/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:07:51 by dstopfer          #+#    #+#             */
/*   Updated: 2022/05/28 19:10:15 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*substr(char *str, unsigned int start, size_t len)
{
	char	*out;
	size_t	slen;

	slen = strlen(str);
	if (!str)
		return (NULL);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		return (ft_strdup(str + start));
	out = malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	strlcpy(out, str + start, len);
	free (str);
	out[len] = '\0';
	return (out);
}