/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:11:59 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 20:19:25 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	ra(t_stack *stack, int p)
// {
// 	int	i;
// 	int	tmp;

// 	i = 0;
// 	tmp = stack->a[0];
// 	while (i < stack->size_a)
// 	{
// 		stack->a[i] = stack->a[i + 1];
// 		i++;
// 	}
// 	stack->a[i] = tmp;
// 	if (p == 1)
// 		write (1, "ra\n", 3);
// }

// void	rb(t_stack *stack, int p)
// {
// 	int	i;
// 	int	tmp;

// 	i = 0;
// 	tmp = stack->b[0];
// 	while (i < stack->size_b)
// 	{
// 		stack->b[i] = stack->b[i + 1];
// 		i++;
// 	}
// 	stack->b[i] = tmp;
// 	if (p == 1)
// 		write (1, "rb\n", 3);
// }

// void	rr(t_stack *stack, int p)
// {
// 	ra(stack, 0);
// 	rb(stack, 0);
// 	if (p == 1)
// 		write(1, "rr\n", 3);
// }

void	ra(t_stack *stack, int p)
{
	int	i;
	int	tmp;

	tmp = stack->a[0];
	i = 0;
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = tmp;
	if (p == 1)
		ft_printf("ra\n");
	check_maxmin_a(stack);
}

void	rb(t_stack *stack, int p)
{
	int	i;
	int	tmp;

	tmp = stack->b[0];
	i = 0;
	while (i < stack->size_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = tmp;
	if (p == 1)
		ft_printf("rb\n");
	check_maxmin_b(stack);
}

void	rr(t_stack *stack, int p)
{
	int	i;
	int	tmp;

	tmp = stack->a[0];
	i = 0;
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = tmp;
	tmp = stack->b[0];
	i = 0;
	while (i < stack->size_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = tmp;
	if (p == 1)
		ft_printf("rr\n");
	check_maxmin_a(stack);
	check_maxmin_b(stack);
}

