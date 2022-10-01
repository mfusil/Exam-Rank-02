/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:11:51 by mfusil            #+#    #+#             */
/*   Updated: 2022/09/21 14:33:44 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	j;
	int	i;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[i])
		{
			if (reject[i] == s[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i])
		i++;
	return (i);
}
