/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:40:04 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 13:37:34 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(const char *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	max_len;

	str_len = ft_strlen(s);
	if (start >= str_len)
		return (0);
	else
	{
		max_len = str_len - start;
		if (len > max_len)
			return (max_len);
		return (len);
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	new_len;
	char	*sub_str;

	if (!s)
		return (NULL);
	new_len = get_len(s, start, len);
	sub_str = malloc(new_len + 1);
	if (sub_str)
	{
		i = 0;
		while (i < new_len)
		{
			sub_str[i] = s[start + i];
			i++;
		}
		sub_str[i] = '\0';
	}
	return (sub_str);
}
