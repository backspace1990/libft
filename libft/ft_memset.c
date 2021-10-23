/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:36:59 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 11:37:00 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	i;
	unsigned char	*j;

	i = (unsigned char) c;
	j = (unsigned char *)b;
	while (len-- > 0)
		*j++ = i;
	return (b);
}
