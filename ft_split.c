/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstopfer <dstopfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:11:52 by dstopfer          #+#    #+#             */
/*   Updated: 2022/04/03 18:50:44 by dstopfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	size_t	counter;
	size_t	i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

static size_t	word_size(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] && s[size] != c)
	{
		size++;
	}
	return (size);
}

static char	*mem_allocater(char const *s, char c)
{
	char	*new_string;
	size_t	len;
	size_t	i;

	i = 0;
	len = word_size(s, c);
	while (s[i] == c)
		i++;
	new_string = ft_substr(s, i, len);
	if (!(new_string))
		return (NULL);
	return (new_string);
}

static char	*free_alloc_mem(char **matrix, size_t counter)
{
	size_t	i;

	i = 0;
	while (i < counter)
	{
		free(matrix[i++]);
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	size_t	counter;
	size_t	k;

	k = -1;
	if (!s)
		return (0);
	counter = word_counter(s, c);
	matrix = (char **)malloc(sizeof(char *) * counter + 1);
	if (!(matrix))
		return (NULL);
	while (++k < counter)
	{
		while (*s == c && *s)
			s++;
		matrix[k] = mem_allocater(s, c);
		if (!matrix[k])
			free_alloc_mem(&matrix[k], counter);
		if (!matrix[k])
			return (NULL);
		while (*s != c && *s)
			s++;
	}
	matrix[k] = (NULL);
	return (matrix);
}
