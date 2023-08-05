/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:11:59 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/04 18:38:35 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack, int p)
{
	int	i;
	int	tmp;
	
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (--i >= 0)
		stack->a[i + 1] = stack->a[i];
	stack->a[0] = tmp;
	if (p == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *stack, int p)
{
	int	i;
	int	tmp;
	
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (--i >= 0)
		stack->b[i + 1] = stack->b[i];
	stack->b[0] = tmp;
	if (p == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack, int p)
{
	rra(stack, 0);
	rrb(stack, 0);
	if (p == 1)
		write(1, "rrr\n", 4);
}
