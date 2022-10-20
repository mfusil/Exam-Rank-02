/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:38:00 by mfusil            #+#    #+#             */
/*   Updated: 2022/10/19 13:38:02 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int hidenp(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] && s2[j])
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    if (s1[i] == '\0')
        return (write(1, "1", 1));
    else
        return (write(1, "0", 1));
}

int main(int argc, char **argv)
{
    if (argc != 3)
        return (write(1, "\n", 1));
    if (argv[1][0] == '\0')
        return (write(1, "\n", 1));
    hidenp(argv[1], argv[2]);
    write(1, "\n", 1);
}