/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:11:36 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/19 17:06:29 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	char	*tmp;
	char	**strs;

	tmp = NULL;
	i = 1;
	if (ac < 2) //will check is it was just ./ps
	{
		write(1, "No arguments provided.\n", 23);
		return (0);
	}
	if (ac != 2 && args_numcheck(ac, av) == -1) //this will check if it is ./ps arg1 arg2 arg3
	{
		printf("Arguments not valid.\n");
		return (1);
	}
	else if (newfunction != -1) //this will check if it is ./ps "arg1 arg2 arg3" in one arg
	{
		printf("Arguments not valid.\n");
		return (1);
	}
	if (ac > 2) //this is for when you need to join them so ac != 2 because if ac == 2 i would already be joined with spaces
		while (i < ac)
			tmp = ft_joinstr(tmp, av[i++]);
	printf("%s\n", tmp);
	strs = ft_split(tmp, ' ');
	i = 0;
	while (strs[i])
		printf("%s\n", strs[i++]);
	if (!tmp || !strs)
	{
		write (1, "Split or Joinstr failed.\n", 25);
		free(tmp);
		free(strs);
		return (1);
	}
	i = 0;
	//okay so here is where you start storing the numbers
	while (strs && strs[i])
		free(strs[i++]);
	free(strs);
	free(tmp);
}
