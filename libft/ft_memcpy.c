/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:36:36 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 11:36:38 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;

	if (dest == 0 && src == 0)
		return (0);
	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	while (n-- > 0)
		*destination++ = *source++;
	return (dest);
}
