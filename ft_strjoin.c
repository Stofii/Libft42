/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:21:07 by dstopfer          #+#    #+#             */
/*   Updated: 2022/05/28 19:08:56 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strjoin(char *str1, char *str2)
{
	char	*out;
	size_t	str1len;
	size_t	str2len;

	if (!str1 || !str2)
		return (0);
	str1len = strlen(str1);
	str2len = strlen(str2);
	out = malloc((str1len + str2len + 1) * sizeof(char));
	if (!out)
		return (0);
	strlcpy(out, str1, str1len + 1);
	free(str1);
	strlcpy(out + str1len, str2, str2len + 1);
	return (out);
}
