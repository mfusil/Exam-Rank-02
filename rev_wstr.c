/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:54:08 by mfusil            #+#    #+#             */
/*   Updated: 2022/09/14 13:12:02 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rev_wstr(char **argv)
{
	int	i;
	int	start;
	int	end;
	int	space;

	i = 0;
	while (argv[1][i] != '\0')
		i++;
	while (i >= 0)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
			i--;
		end = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		start = i + 1;
		space = start;
		while (start <= end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
		if (space)
			write (1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1));
	if (argv[1][0] == '\0')
		return (write(1, "\n", 1));
	rev_wstr(argv);
	write (1, "\n", 1);
}
