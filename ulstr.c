/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:07:07 by mfusil            #+#    #+#             */
/*   Updated: 2022/08/11 13:14:08 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (write(1, "\n", 1));	
	if (argv[1][0] == '\0')
		return (write(1, "\n", 1));
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] += 32;
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            argv[1][i] -= 32;
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
