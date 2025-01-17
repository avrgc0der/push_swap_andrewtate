/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:53:36 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/16 17:17:32 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int args_numcheck(int ac, char **av)
{
    int i;
    int j;
    int has_digits;

    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j] && is_space(av[i][j]))
            j++;
        if (av[i][j] == '-')
            j++;
        has_digits = 0;
        while (av[i][j])
        {
            if (!is_digit(av[i][j]))
                return (-1);
            has_digits = 1;
            j++;
        }
        if (!has_digits)
            return (-1);
        i++;
    }
    return (1);
}

// ! there are two indexes for av[i][j]
// * check if there are arguments, and if the spaces function is applicable
// * 