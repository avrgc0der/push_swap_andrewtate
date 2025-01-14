/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:11:36 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/13 14:17:49 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	int i;
	size_t spaces;
	char *tmp;
	char **strs;

	tmp = NULL;
	i = 1;
	if (ac < 2)
	{
		write(1, "No arguments provided.\n", 23);
		return (0);
	}
	if (ac > 2)
	{
		while (i < ac)
			tmp = ft_joinstr(tmp, av[i++]);
		printf("%s\n", tmp);
		strs = ft_split(tmp, ' ');
	}
	if (!tmp || !strs)
	{
		write (1, "Split or Joinstr failed.\n", 25);
		free(tmp);
		free(strs);
		return (1);
	}
	i = 0;

		while (strs && strs[i])
			free(strs[i++]);
		free(strs);
		free(tmp);
}