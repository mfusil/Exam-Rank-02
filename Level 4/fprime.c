/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:37:49 by mfusil            #+#    #+#             */
/*   Updated: 2022/10/06 13:48:42 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	nbr;
	int	i;

	i = 2;
	if (argc != 2)
		return (printf("\n"));
	nbr = atoi (argv[1]);
	if (nbr == 1)
		printf ("%d", nbr);
	while (i <= nbr)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (nbr == i)
				break ;
			printf("*");
			nbr /= i;
			i = 2;
		}
		i++;
	}
	printf("\n");
}
