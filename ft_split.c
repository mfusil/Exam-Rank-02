/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:08:11 by mfusil            #+#    #+#             */
/*   Updated: 2022/09/14 12:52:08 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_words(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			word++;
			while (str[i] == c)
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	*ft_subword(char *str, int start, int finish)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = malloc (start - finish + 1 * sizeof(char));
	while (start < finish)
	{
		tmp[i] = str[start];
		i++;
		start++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		x;
	int		y;
	int		index;

	if (!str)
		return (NULL);
	x = -1;
	y = 0;
	index = -1;
	tab = malloc(sizeof(char *) * ft_count_words(str, ' '));
	if (!tab)
		return (NULL);
	while (++x < ft_strlen(str))
	{
		if ((str[x] != ' ' || str[x] != '\t') && index < 0)
			index = x;
		else if ((str[x] == ' ' || str[x] == '\t'
				|| x == ft_strlen(str)) && index >= 0)
		{
			tab[y] = ft_subword(str, index, x);
			y++;
			index = -1;
		}
	}
	tab[y] = NULL;
	return (tab);
}
