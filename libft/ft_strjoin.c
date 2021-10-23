/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:38:40 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 13:30:35 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*j_str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	j_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*s1));
	if (!j_str)
		return (NULL);
	while (s1[i])
	{
		j_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		j_str[i] = s2[j];
		i++;
		j++;
	}
	j_str[i] = '\0';
	return (j_str);
}
