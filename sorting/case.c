/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:09:44 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 20:02:18 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	case_1(t_stack *stack)
{
	if (stack->tmp.cur_a >= stack->tmp.cur_b)
		stack->tmp.tmp_moves = stack->tmp.cur_a;
	else
		stack->tmp.tmp_moves = stack->tmp.cur_b;
}

void	case_2(t_stack *stack)
{
	if (stack->size_a - stack->tmp.cur_a >= stack->size_b - stack->tmp.cur_b)
		stack->tmp.tmp_moves = stack->size_a - stack->tmp.cur_a;
	else
		stack->tmp.tmp_moves = stack->size_b - stack->tmp.cur_b;
}
