/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:56:27 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/06 14:09:24 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_checkinput(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str [i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	checkdouble(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < stack->size_a)
	{
		tmp = stack->a[i];
		j = i;
		while (++j < stack->size_a)
		{
			if (tmp == stack->a[j])
				ft_error();
		}
	}
}

void	check_sorting(t_stack *stack)
{
	if (stack->size_a == 2)
		sort_2(stack);
	else if (stack->size_a == 3)
		sort_3(stack);
	else
		sorting(stack);
}
