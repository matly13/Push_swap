/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_to_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:05:16 by martina           #+#    #+#             */
/*   Updated: 2023/08/04 13:54:43 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_push	ft_index_over(t_stack *stack, int i, int tmp_b, t_push topush)
{
	if (stack->current_b - tmp_b < stack->current_a - i)
		topush.tmp_moves = stack->current_a - i;
	else
		topush.tmp_moves = stack->current_b - tmp_b;
	return (topush);
}

t_push	ft_index_under(int i, int tmp_b, t_push topush)
{
	if (tmp_b >= i)
		topush.tmp_moves = tmp_b;
	else
		topush.tmp_moves = i;
	return (topush);
}

t_push	ft_new_cheapest(int i, int tmp_b, t_push topush)
{
	topush.idx_a = i;
	topush.idx_b = tmp_b;
	topush.count_moves = topush.tmp_moves;
	return (topush);
}