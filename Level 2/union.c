/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:42:33 by mfusil            #+#    #+#             */
/*   Updated: 2022/10/18 17:43:26 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_doubles(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_doubles2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (check_doubles(argv[1], argv[1][i], i) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (check_doubles(argv[2], argv[2][i], i) == 1 &&
				check_doubles2(argv[1], argv[2][i]) == 1)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
