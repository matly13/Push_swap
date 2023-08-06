/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:11:59 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/06 14:09:00 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack, int p)
{
	int	i;
	int	tmp;

	tmp = stack->a[stack->size_a - 1];
	i = stack->size_a;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = tmp;
	if (p == 1)
		ft_printf("rra\n");
	check_maxmin_a(stack);
}

void	rrb(t_stack *stack, int p)
{
	int	i;
	int	tmp;

	tmp = stack->b[stack->size_b - 1];
	i = stack->size_b;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = tmp;
	if (p == 1)
		ft_printf("rrb\n");
	check_maxmin_b(stack);
}

void	rrr(t_stack *stack, int p)
{
	int	i;
	int	tmp;

	tmp = stack->a[stack->size_a - 1];
	i = stack->size_a;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = tmp;
	tmp = stack->b[stack->size_b - 1];
	i = stack->size_b;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = tmp;
	if (p == 1)
		ft_printf("rrr\n");
	check_maxmin_a(stack);
	check_maxmin_b(stack);
}
