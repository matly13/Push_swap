/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:25:49 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/06 13:56:12 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack, int i)
{
	int	swp;

	swp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = swp;
	if (i == 1)
		ft_printf("sa\n");
	check_maxmin_a(stack);
}

void	sb(t_stack *stack, int i)
{
	int	swp;

	swp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = swp;
	if (i == 1)
		ft_printf("sb\n");
	check_maxmin_b(stack);
}

void	ss(t_stack *stack, int i)
{
	int	swp;

	swp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = swp;
	swp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = swp;
	if (i == 1)
		ft_printf("ss\n");
	check_maxmin_a(stack);
	check_maxmin_b(stack);
}
