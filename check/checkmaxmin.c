/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmaxmin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:50:41 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/04 18:38:35 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort(t_stack *stack)
{
	int	i;

	i = 0;
	while(++i < stack->size_a)
	{
		if (stack->a[i] < stack->a[i - 1])
			return(1);
	}
	return (0);
}

void	check_maxmin_a(t_stack *stack)
{
	int	i;

	i = 0;
	stack->max_a = i;
	while (++i < stack->size_a)
	{
		if (stack->a[stack->max_a] < stack->a[i])
			stack->max_a = i;
	}
	i = 0;
	stack->min_a = i;
	while (++i < stack->size_a)
	{
		if (stack->a[stack->min_a] > stack->a[i])
			stack->min_a = i;
	}
}

void	check_maxmin_b(t_stack *stack)
{
	int	i;

	i = 0;
	stack->max_b = i;
	while (++i < stack->size_b)
	{
		if (stack->b[stack->max_b] < stack->b[i])
			stack->max_b = i;
	}
	i = 0;
	stack->min_b = i;
	while (++i < stack->size_b)
	{
		if (stack->b[stack->min_b] > stack->b[i])
			stack->min_b = i;
	}
}
