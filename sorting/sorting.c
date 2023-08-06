/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:24:41 by martina           #+#    #+#             */
/*   Updated: 2023/08/06 14:11:19 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_top_b(t_stack *stack, int idx_a)
{
	int	i;

	i = -1;
	stack->tmp.cur_a = idx_a;
	stack->tmp.cur_b = 0;
	if (stack->a[idx_a] > stack->b[stack->max_b]
		|| stack->a[idx_a] < stack->b[stack->min_b])
	{
		stack->tmp.cur_b = stack->max_b;
		return ;
	}
	while (++i < stack->size_b - 1)
	{
		if (stack->a[idx_a] < stack->b[i]
			&& stack->a[idx_a] > stack->b[i + 1])
		{
			stack->tmp.cur_b = i + 1;
			return ;
		}
	}
}

void	save_push_b(t_stack *stack)
{
	stack->push.idx_a = stack->tmp.cur_a;
	stack->push.idx_b = stack->tmp.cur_b;
	stack->push.mv = stack->tmp.tmp_moves;
}

void	count_mv_1(t_stack *stack)
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
	if (stack->tmp.cur_a < half_a && stack->tmp.cur_b < half_b)
		case_1(stack);
	else if (stack->tmp.cur_a >= half_a && stack->tmp.cur_b >= half_b)
		case_2(stack);
	else if (stack->tmp.cur_a < half_a && stack->tmp.cur_b >= half_b)
		stack->tmp.tmp_moves = stack->tmp.cur_a
			+ (stack->size_b - stack->tmp.cur_b);
	else if (stack->tmp.cur_a >= half_a && stack->tmp.cur_b < half_b)
		stack->tmp.tmp_moves = stack->tmp.cur_b
			+ (stack->size_a - stack->tmp.cur_a);
	if (stack->tmp.cur_a == 0 || stack->tmp.tmp_moves < stack->push.mv)
		save_push_b(stack);
}

void	find_cheapest_mv_1(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_a)
	{
		find_top_b(stack, i);
		count_mv_1(stack);
	}
}
