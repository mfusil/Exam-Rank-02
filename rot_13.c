/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:13:05 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/23 12:47:21 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int x;
	int y;

	x = 0;
	y = 1;
	if (argc != 2)
		return(write (1, "\n", 1));
	if (argv[y][x] == '\0')
		return(write (1, "\n", 1));
	while (argv[y][x] != '\0')
	{
		if (argv[y][x] >= 'A' && argv[y][x] <= 'M')
		{
			argv[y][x] = argv[y][x] + 13;
			write (1, &argv[y][x], 1);
		}
		else if (argv[y][x] >= 'N' && argv[y][x] <= 'Z')
        {
            argv[y][x] = argv[y][x] - 13;
            write (1, &argv[y][x], 1);
		}
		else if (argv[y][x] >= 'a' && argv[y][x] <= 'm')
        {
            argv[y][x] = argv[y][x] + 13;
            write (1, &argv[y][x], 1);
		}
		else if (argv[y][x] >= 'n' && argv[y][x] <= 'z')
        {
            argv[y][x] = argv[y][x] - 13;
            write (1, &argv[y][x], 1);
		}
		else	
			write (1, &argv[y][x], 1);
		x++;	
	}
	write (1, "\n", 1);
}
