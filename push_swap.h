/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:11:38 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/19 17:19:38 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
	int				i;
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int				nb; //this is where you store the atoi value
	int				index; // this is where you store the index of the number
	struct s_stack	*next; //this will point to the next node of the stack so the next number in the stack 1 2 3 4 5 it will point to 2 for the first one 3 for the second one get it?
	struct s_stack	*prev; // this will do the opposite by pointing to the prevoius so 1 will point to null since its the start
}	t_stack;

typedef struct s_structy
{
	int		i;
	int		j;
	int		nb;
	char	*str;
	char	*tmp;
	char	**split_args;
	t_stack	a;
	t_stack	b;
}	t_structy;

int		args_num_check(int ac, char **av);
char	*ft_joinstr(char *s1, char *s2);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
int		is_digit(int c);
int		is_space(int c);
int		args_numcheck(int ac, char **av);

#endif