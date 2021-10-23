/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:35:00 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 12:02:31 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int num, int minus)
{
	int	i;

	i = 1;
	num /= 10;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i + minus);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	int		minus;

	minus = 0;
	if (n < 0)
		minus = 1;
	len = get_len(n, minus);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	p[len] = 0;
	while (--len >= minus)
	{
		p[len] = (char)(ft_abs((n % 10)) + '0');
		n /= 10;
	}
	if (minus)
		p[0] = '-';
	return (p);
}
