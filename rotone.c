/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:09:13 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/30 12:22:28 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int x;

	x = 0;
	if (argc != 2)
		return (write(1, "\n", 1));
	if (argv[1][x] == '\0')
		return (write(1, "\n", 1));
	while (argv[1][x] != '\0')
	{
		if (argv[1][x] == 'Z')
			argv[1][x] = argv[1][x] - 25;
		else if (argv[1][x] == 'z')
			argv[1][x] = argv[1][x] - 25;
		else if (argv[1][x] >= 'A' && argv[1][x] <= 'Y')
			argv[1][x] = argv[1][x] + 1;
		else if (argv[1][x] >= 'a' && argv[1][x] <= 'y')
			argv[1][x] = argv[1][x] + 1;
		write (1, &argv[1][x], 1);
		x++;	
	}
	write (1, "\n", 1);
}
