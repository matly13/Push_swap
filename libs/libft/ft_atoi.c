/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:25:42 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 18:51:47 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str)
{
	long long	i;
	long long	r;
	int			s;

	i = 0;
	r = 0;
	s = 1;
	if (ft_strncmp("-2147483648", str, 12) == 0)
		return (-2147483648);
	while (str[i] != '\0' && ((str[i] > 8 && 14 > str[i]) || str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		r *= 10;
		r += (str[i] - 48);
		i++;
	}
	return (r * s);
}
