/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:36:48 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 11:36:49 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dst2;

	if (dest == 0 && src == 0)
		return (0);
	dst2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dst2 > src2)
		while (n--)
			*(dst2 + n) = *(src2 + n);
	else
		while (n--)
			*dst2++ = *src2++;
	return (dest);
}
