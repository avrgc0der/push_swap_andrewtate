/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:11:36 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/16 17:23:46 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	int i;
	char *tmp;
	char **strs;

	tmp = NULL;
	i = 1;
	if (ac < 2)
	{
		write(1, "No arguments provided.\n", 23);
		return (0);
	}
	if (args_numcheck(ac, av) == -1)
	{
		printf("Arguments not valid.\n");
		return (1);
	}
	if (ac > 2)
	{
		while (i < ac)
		char *tmp2;
			tmp = ft_joinstr(tmp, av[i++]);
		printf("%s\n", tmp);
		strs = ft_split(tmp, ' ');
		int spl = 0;
		while (strs[spl])
			printf("%s\n", strs[spl++]);
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
