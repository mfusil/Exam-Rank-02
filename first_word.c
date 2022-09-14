/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:31:29 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/22 16:36:29 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	x;
	int y;

	x = 0;
	y = 1;
	if (argc != 2)
		return (write(1, "\n", 1));
	if (argv[y][x] == '\0')
		return (write(1, "\n", 1));
	while (argv[y][x] == ' ' || argv[y][x] == '	')
		x++;
	while (argv[y][x] != ' ' && argv[y][x] != '	' && argv[y][x] != '\0')
	{
		write (1, &argv[y][x], 1);
		x++;
	}
	write (1, "\n", 1);
}
