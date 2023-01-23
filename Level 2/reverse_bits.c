/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:34:42 by mfusil            #+#    #+#             */
/*   Updated: 2022/09/30 16:27:11 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int	byte;
	unsigned char	res;

	byte = 8;
	while (byte--)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
	}
	return (res);
}
