/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:26:37 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/06 14:08:53 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *stack, int p)
{
	int	i;

	i = stack->size_b;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->size_b++;
	stack->b[0] = stack->a[0];
	i = 1;
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->size_a--;
	if (p == 1)
		ft_printf("pb\n");
	check_maxmin_b(stack);
	check_maxmin_a(stack);
}

void	pa(t_stack *stack, int p)
{
	int	i;

	i = stack->size_a;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->size_a++;
	stack->a[0] = stack->b[0];
	i = 1;
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->size_b--;
	if (p == 1)
		ft_printf("pa\n");
	check_maxmin_a(stack);
	check_maxmin_b(stack);
}
