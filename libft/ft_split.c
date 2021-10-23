/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandis <tgrandis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:37:41 by tgrandis          #+#    #+#             */
/*   Updated: 2021/10/22 12:16:35 by tgrandis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	num_c(const char *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i] == c && c)
		i++;
	while (s[i])
	{
		cnt++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (cnt);
}

static size_t	my_str_len(const char *s, char c, size_t *i)
{
	size_t	len;

	len = 0;
	while (s[(*i)] == c && c)
		(*i)++;
	while (s[(*i)] != c && s[(*i)])
	{
		len++;
		(*i)++;
	}
	return (len);
}

static void	fill_tab(char *str, const char *s, size_t *i, char c)
{
	size_t	j;

	j = 0;
	while (s[(*i)] == c && c)
		(*i)++;
	while (s[(*i)] != c && s[(*i)])
	{
		str[j] = s[(*i)];
		j++;
		(*i)++;
	}
	str[j] = '\0';
}

static void	*cleaner_all(char **tab, size_t i)
{
	int	j;

	j = ((int)i) - 1;
	while (j > 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return ((void *) 0);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	num_str;
	size_t	k;
	size_t	l;
	size_t	i;

	if (!s)
		return ((void *) 0);
	num_str = num_c(s, c);
	tab = malloc(sizeof(char *) * (num_str + 1));
	if (!tab)
		return (tab);
	k = 0;
	l = 0;
	i = 0;
	while (i < num_str)
	{
		tab[i] = malloc(sizeof(char) * (my_str_len(s, c, &k) + 1));
		if (!tab[i])
			return (cleaner_all(tab, i));
		fill_tab(tab[i], s, &l, c);
		i++;
	}
	tab[i] = (void *) 0;
	return (tab);
}
