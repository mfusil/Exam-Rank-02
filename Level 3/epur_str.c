/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:47:04 by mfusil            #+#    #+#             */
/*   Updated: 2022/10/20 11:48:37 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] == '\0')
			break ;
		else if (str[i] == ' ' || str[i] == '\t')
		{
			write(1, " ", 1);
			i++;
			while (str[i] == ' ' || str[i] == '\t')
				i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1));
	if (argv[1][0] == '\0')
		return (write(1, "\n", 1));
	epur_str(argv[1]);
	write(1, "\n", 1);
}
