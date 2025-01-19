/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:13:28 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/19 17:32:00 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node *stack, char const *type)
{
	int	tmp;

	tmp = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp;
	if (type)
		write(1, type, 3);
}

void	sa(t_node *a, int flag)
{
	if (flag == 1)
		swap(a, "sa\n");
	else
		swap(a, NULL);
}

void	sb(t_node *b, int flag)
{
	if (flag == 1)
		swap(b, "sb\n");
	else
		swap(b, NULL);
}

void	ss(t_node *a, t_node *b, int flag)
{
	swap(a, NULL);
	swap(b, NULL);
	if (flag == 1)
		write(1, "ss\n", 3);
}
