/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:38:26 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 20:30:57 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_top_a(t_stack *stack, int idx_b)
{
	int	i;

	i = -1;
	stack->tmp.cur_b = idx_b;
	stack->tmp.cur_a = 0;
	if (stack->b[idx_b] > stack->a[stack->max_a]
		|| stack->b[idx_b] < stack->a[stack->min_a])
	{
		stack->tmp.cur_a = stack->min_a;
		return ;
	}
	while (++i < stack->size_a - 1)
	{
		if (stack->b[idx_b] > stack->a[i]
			&& stack->b[idx_b] < stack->a[i + 1])
		{
			stack->tmp.cur_a = i + 1;
			return ;
		}
	}
}

void	save_push_a(t_stack *stack)
{
	stack->push.idx_b = stack->tmp.cur_b;
	stack->push.idx_a = stack->tmp.cur_a;
	stack->push.mv = stack->tmp.tmp_moves;
}

void	count_mv_2(t_stack *stack)
{
	int	half_a;
	int	half_b;

	if (stack->size_b % 2 != 0)
		half_b = stack->size_b / 2 + 1;
	else
		half_b = stack->size_b / 2;
	if (stack->size_a % 2 != 0)
		half_a = stack->size_a / 2 + 1;
	else
		half_a = stack->size_a / 2;
	if (stack->tmp.cur_b < half_b && stack->tmp.cur_a < half_a)
		case_1(stack);
	else if (stack->tmp.cur_b >= half_b && stack->tmp.cur_a >= half_a)
		case_2(stack);
	else if (stack->tmp.cur_b < half_b && stack->tmp.cur_a >= half_a)
		stack->tmp.tmp_moves = stack->tmp.cur_b
			+ stack->size_a - stack->tmp.cur_a;
	else if (stack->tmp.cur_b >= half_b && stack->tmp.cur_a >= half_a)
		stack->tmp.tmp_moves = stack->tmp.cur_a
			+ stack->size_b - stack->tmp.cur_b;
	if (stack->tmp.cur_b == 0 || stack->tmp.tmp_moves < stack->push.mv)
		save_push_a(stack);
}

void	exec_mv_to_a(t_stack *stack)
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
	pa(stack, 1);
}

void	find_cheapest_mv_2(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size_b)
	{
		find_top_a(stack, i);
		printf("idx_a: %d\n", stack->tmp.cur_a);
		count_mv_2(stack);
	}
}
