/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:01:42 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 19:14:03 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	exec_case_1(t_stack *stack)
{
	int	i;

	if (stack->push.idx_a >= stack->push.idx_b)
	{
		i = -1;
		while (++i < stack->push.idx_b)
			rr(stack, 1);
		i = -1;
		while (++i < stack->push.idx_a - stack->push.idx_b)
			ra(stack, 1);
	}
	else
	{
		i = -1;
		while (++i < stack->push.idx_a)
			rr(stack, 1);
		i = -1;
		while (++i < stack->push.idx_b - stack->push.idx_a)
			rb(stack, 1);
	}
}

void	exec_case_2(t_stack *stack)
{
	int	i;

	if (stack->size_a - stack->push.idx_a >= 
		stack->size_b - stack->push.idx_b)
	{
		i = -1;
		while (++i < stack->size_b - stack->push.idx_b)
			rrr(stack, 1);
		i = -1;
		while (++i < (stack->size_a - stack->push.idx_a) - 
			(stack->size_b - stack->push.idx_b))
			rra(stack, 1);
	}
	else
	{
		i = -1;
		while (++i < stack->size_a - stack->push.idx_a)
			rrr(stack, 1);
		i = -1;
		while (++i < (stack->size_b - stack->push.idx_b) - 
			(stack->size_a - stack->push.idx_a))
			rrb(stack, 1);
	}
}

void	exec_case_3(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->push.idx_a)
		ra(stack, 1);
	i = -1;
	while (++i < stack->size_b - stack->push.idx_b)
		rrb(stack, 1);
}

void	exec_case_4(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->push.idx_b)
		rb(stack, 1);
	i = -1;
	while (++i < stack->size_a - stack->push.idx_a)
		rra(stack, 1);
}

void	exec_mv_to_b(t_stack *stack)
{
	int	half_a;
	int	half_b;

	if (stack->size_a % 2 != 0)
		half_a = stack->size_a / 2 + 1;
	else
		half_a = stack->size_a / 2;
	if (stack->size_b % 2 != 0)
		half_b = stack->size_b / 2 + 1;
	else
		half_b = stack->size_b / 2;
	if (stack->push.idx_a < half_a && stack->push.idx_b < half_b)
		exec_case_1(stack);
	else if (stack->push.idx_a >= half_a && stack->push.idx_b >= half_b)
		exec_case_2(stack);
	else if (stack->push.idx_a < half_a && stack->push.idx_b >= half_b)
		exec_case_3(stack);
	else if (stack->push.idx_a >= half_a && stack->push.idx_b >= half_b)
		exec_case_4(stack);
	pb(stack, 1);
}
