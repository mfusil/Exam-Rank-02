/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:57:55 by mfusil            #+#    #+#             */
/*   Updated: 2022/10/19 12:58:17 by mfusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_doublon_2(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int check_doublon(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void    inter(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i])
    {
        if (check_doublon(s2, s1[i]) == 1 && check_doublon_2(s1, s1[i], i) == 1)
            write(1, &s1[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
        return (write(1, "\n", 1));
    if (argv[1][0] == '\0')
        return (write(1, "\n", 1));
    inter(argv[1], argv[2]);
    write(1, "\n", 1);
}