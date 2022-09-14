/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:22:06 by mfusil            #+#    #+#             */
/*   Updated: 2022/08/11 13:36:59 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int i;
    int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((i == ' ' || i == '\t') && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}
int main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1));
	if (argv[1][0] == '\0')
		return (write(1, "\n", 1));
	last_word(argv[1]);
	write (1, "\n", 1);
}
