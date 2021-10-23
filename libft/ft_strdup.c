/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:38:22 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 12:21:00 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*k;

	k = malloc((ft_strlen(s1) + 1) * sizeof(*s1));
	if (!k)
		return (0);
	ft_strlcpy(k, s1, (ft_strlen(s1) + 1) * sizeof(*s1));
	return (k);
}
