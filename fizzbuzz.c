/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:30:55 by mfusil            #+#    #+#             */
/*   Updated: 2022/08/11 11:40:29 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	digit;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	digit = (nbr % 10) + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write (1, "fizzbuzz\n", 9);
			i++;
		}
		if (i % 3 == 0)
		{	
			write (1, "fizz\n", 5);
			i++;
		}
		if (i % 5 == 0)
		{
			write (1, "buzz\n", 5);
			i++;
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
			i++;
		}
	}
}
