/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:21:42 by enoshahi          #+#    #+#             */
/*   Updated: 2025/01/14 21:32:36 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(int nb, int mult)
{
    if ((mult == 1 && nb == 2147483647) || (mult == -1 && nb == -2147483648))
        return (mult == 1 ? -1 : 0);

    nb *= mult;
    return (nb);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if ((str[i] == '-' || str[i] == '+') && (str[i++] == '-'))
			sign = -1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i++] - '0');
		}
		return (check(res, sign));
	}
	return (0);
}
