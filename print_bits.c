/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:06:50 by mfusil            #+#    #+#             */
/*   Updated: 2022/05/20 13:26:49 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int shift = 7;
	unsigned char mask = 1;
	char out;

	while (shift >= 0)
	{
		out = ((octet >> shift) & mask) + '0';
		write(1, &out, 1);
		--shift;
	}
}

int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);
}            
