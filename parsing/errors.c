/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:53:36 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/14 21:28:14 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int args_num_check(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	while (i < ac - 1)
	{
		j = 0;
		while (av[j][i] != '\0')
		{
			if (is_space(av[i][j]) == 0)
			{
				if(!(j == 0 && av[i][j] == '-'))
					return (-1);
			}
			j++;
		}
		i++;
	}
	return(1);
}