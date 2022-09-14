/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:07:08 by mfusil            #+#    #+#             */
/*   Updated: 2022/06/30 14:43:15 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	first = atoi(argv[1]);
	int	second = atoi(argv[3]);
	char	oper = argv[2][0];
	int	res;

	res = 0;
	if (argc == 4)
	{
		if (oper == '+')
			res = first + second;
		else if (oper == '*')
		{
			res = first * second;
		}
		else if (oper == '-')
			res = first - second;
		else if (oper == '/')
			res = first / second;
		else if (oper == '%')
			res = first % second;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
