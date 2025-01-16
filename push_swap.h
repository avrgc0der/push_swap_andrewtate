/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:11:38 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/15 12:28:52 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// typedef struct s_node
// {
// 	int i;
// 	int data;
// 	struct s_node *next;
// } t_node;

// typedef struct s_split
// {
// 	int i;
// 	size_t spaces;
// 	char *tmp;
// 	char **strs;
// }	t_split;

typedef struct s_structy
{
	int i;
	int j;
	int nb;
	char *str;
	char *tmp;
	char **split_args;
	struct s_structy *a;
	struct s_structy *b;
} t_structy;

int		args_num_check(int ac, char **av);
char	*ft_joinstr(char *s1, char *s2);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
int		is_digit(int c);
int		is_space(int c);

# endif
