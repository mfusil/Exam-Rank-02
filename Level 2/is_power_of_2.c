/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:35:15 by mfusil            #+#    #+#             */
/*   Updated: 2022/10/19 12:35:10 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	number;

	number = 1;
	if (n < 0)
		return (0);
	while (number <= n && number > 0)
	{
		if (number == n)
			return (1);
		number *= 2;
	}
	return (0);
}
