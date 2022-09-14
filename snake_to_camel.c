/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:12:16 by mfusil            #+#    #+#             */
/*   Updated: 2022/08/11 14:22:04 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (write(1, "\n", 1));
	if (argv[1][0] == '\0')
        return (write(1, "\n", 1));
	while (argv[1][i])
	{
		if (argv[1][i] == '_')
		{
			i++;
			argv[1][i] -= 32;
			write(1, &argv[1][i], 1);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
