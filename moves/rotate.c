/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:11:59 by mbasile           #+#    #+#             */
/*   Updated: 2023/07/17 16:26:08 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack, int p)
{
	int i;
	int	tmp;

	i = 0;
	tmp = stack->a[0];
	while (i < stack->size_a)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = tmp;
	if (p == 1)
		write (1, "ra\n", 3);
}

void	rb(t_stack *stack, int p)
{
	int i;
	int	tmp;

	i = 0;
	tmp = stack->b[0];
	while (i < stack->size_b)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = tmp;
	if (p == 1)
		write (1, "rb\n", 3);
}

void	rr(t_stack *stack, int p)
{
	ra(stack, 0);
	rb(stack, 0);
	if (p == 1)
		write(1, "rr\n", 3);
}
