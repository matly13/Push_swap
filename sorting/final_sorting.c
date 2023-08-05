/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:47:30 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 20:42:41 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	final_sort(t_stack *stack)
{
	int	half_a;

	if (stack->size_a % 2 != 0)
		half_a = stack->size_a / 2 + 1;
	else
		half_a = stack->size_a / 2;
	check_maxmin_a(stack);
	if (stack->min_a < half_a)
	{
		while (stack->min_a != 0)
		{
			ra(stack, 1);
			check_maxmin_a(stack);
		}
	}
	else
	{
		while (stack->min_a != 0)
		{
			rra(stack, 1);
			check_maxmin_a(stack);
		}
	}
}

void	sorting(t_stack *stack)
{
	pb(stack, 1);
	pb(stack, 1);
	while (stack->size_a > 3)
	{
		find_cheapest_mv_1(stack);
		exec_mv_to_b(stack);
	}
	sort_3(stack);
	while (stack->size_b != 0)
	{
		find_cheapest_mv_2(stack);
		exec_mv_to_a(stack);
	}
	final_sort(stack);
	int i = -1;
	while (++i < stack->size_a)
		printf("A[%d] --> %d\n", i, stack->a[i]);
}
