/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:31:24 by mfusil            #+#    #+#             */
/*   Updated: 2022/09/20 17:52:00 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	n;

	i = 0;
	n = end - start + 1;
	if (n < 0)
		n = n * -1;
	tab = malloc (n * sizeof(int));
	if (tab)
	{
		while (i < n)
		{
			tab[i] = end;
			printf("%d\n", tab[i]);
			end--;
			i++;
		}
	}
	return (tab);
}

int	main(void)
{
	ft_rrange(5, 3);
}
