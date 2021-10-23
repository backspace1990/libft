/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:04:52 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 11:16:53 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == '\v' || c == '\t' || c == '\n'
		|| c == ' ' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static void	ft_all_skip(const char **nptr, short int *sign)
{
	while (ft_isspace(**nptr))
		(*nptr)++;
	if (**nptr == '-' || **nptr == '+')
	{
		if (**nptr == '-')
			*sign = -1;
		(*nptr)++;
	}
	while (**nptr == '0')
		(*nptr)++;
}

int	ft_atoi(const char *str)
{
	long long	nbr;
	short int	sign;

	sign = 1;
	nbr = 0;
	ft_all_skip(&str, &sign);
	while (ft_isdigit(*str))
	{
		if ((10 * nbr + (*str - '0')) < nbr)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		nbr = 10 * nbr + (*str - '0');
		str++;
	}
	return (sign * (int)nbr);
}
