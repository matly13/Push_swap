/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:41:26 by mbasile           #+#    #+#             */
/*   Updated: 2023/07/18 17:05:24 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *stack)
{
	sa(stack, 1);
}

void	sort_3(t_stack *stack)
{
	check_maxmin_a(stack);
	if (stack->max_a == 0 && stack->min_a == 2)
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (stack->max_a == 0 && stack->min_a == 1)
		ra(stack, 1);
	else if (stack->max_a == 1 && stack->min_a == 0)
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if (stack->max_a == 1 && stack->min_a == 2)
		rra(stack, 1);	
	else if (stack->max_a == 2 && stack->min_a == 1)
		sa(stack, 1);
}