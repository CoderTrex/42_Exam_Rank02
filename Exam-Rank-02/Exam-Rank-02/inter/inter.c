/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:15:17 by slammari          #+#    #+#             */
/*   Updated: 2022/02/13 19:37:23 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c, int index)
{
    int i = 0;
    while (str && i < index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (-1);
}
int main (int ac, char **av)
{
    int i = 0;
    int len = 0;

    if (ac == 3)
    {
        while (av[2][len])
            len++;
        while (av[1][i])
        {
            if (check(av[1], av[1][i], i) == -1)
            {
                if (check(av[2], av[1][i], len) == 1)
                    write (1, &av[1][i], 1);
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
