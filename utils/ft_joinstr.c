/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:20:38 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/14 21:20:40 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_joinstr(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	j = 0;
	tmp = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 2));
	if (!tmp)
		return (free(s1), NULL);
	while (s1 != NULL && s1[++i] != '\0')
		tmp[i] = s1[i];
	tmp[i++] = ' ';
	while (s2 != NULL && s2[j] != '\0' && s2[j] != '\n')
	{
		tmp[j + i] = s2[j];
		j++;
	}
	if (s2 != NULL && s2[j] == '\n')
		tmp[j++ + i] = '\n';
	tmp[j + i] = '\0';
	if (s1 != NULL)
		free(s1);
	return (tmp);
}
