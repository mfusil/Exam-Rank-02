/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:17:18 by mfusil            #+#    #+#             */
/*   Updated: 2022/09/14 12:49:35 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_string(char *s, long i, int len)
{
	while (i > 0)
	{
		s[len--] = 48 + (i % 10);
		i /= 10;
	}
	return (i);
}

int	ft_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	i;
	char	*s;
	int		len;

	len = ft_len(nbr);
	i = nbr;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		i *= -1;
		s[0] = '-';
	}
	s = ft_string(s, i, len);
	return (s);
}
