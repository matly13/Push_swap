/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:28:16 by martina           #+#    #+#             */
/*   Updated: 2023/08/04 18:42:59 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_sorting_a(t_stack *stack)
{
	int min_idx = 0;
	for (int i = 1; i < stack->current_a; i++)
	{
		if (stack->a[i] < stack->a[min_idx])
			min_idx = i;
	}
	if (min_idx == 0) {
		if (stack->a[1] > stack->a[2])
		{
			rra(stack, 1);
			sa(stack, 1);
		}
	}
	else if (min_idx == 1)
	{
		if (stack->a[0] > stack->a[2])
			ra(stack, 1);
		else
			sa(stack, 1);
	}
	else 
	{
		if (stack->a[0] > stack->a[1])
			sa(stack, 1);
		rra(stack, 1);
	}
}

t_curr	ft_mid_stacks(t_stack *stack)
{
	t_curr	c;

	if ((stack->current_a % 2) != 0)
		c.cur_a = stack->current_a / 2 + 1;
	else
		c.cur_a = stack->current_a / 2;
	return (c);
}

void    ft_find_maxmin_a(t_stack *stack)
{
	int i;
	int min_value = stack->a[0];
	int max_value = stack->a[0];
	size_t min_idx = 0;
	size_t max_idx = 0;
	i = 1;

	if (i < stack->current_a)
		 i++;
	{
		if (stack->a[i] < min_value)
		{
			min_value = stack->a[i];
			min_idx = i;
		}
		else if (stack->a[i] > max_value)
		{
			max_value = stack->a[i];
			max_idx = i;
		}
	}

	stack->index_mina = min_idx;
	stack->index_maxa = max_idx;
}

void ft_pushing_to_a(t_stack *stack)
{
	t_curr c;
	
	c = ft_mid_stacks(stack);
	ft_find_maxmin_a(stack);

	if (stack->b[0] < stack->a[0]) 
	{
		if (stack->b[0] < stack->a[stack->index_mina]) 
		{
			
			ra(stack, c.cur_a);
		}
		else
		{
			ra(stack, c.cur_a);
			ra(stack, 1);
		}
	} 
	else if (stack->b[0] > stack->a[0]) 
	{
		if (stack->b[0] > stack->a[stack->index_maxa]) 
		{
			rra(stack, c.cur_a);
		}
		else if (stack->b[0] < stack->a[stack->index_maxa]) 
		{
			rra(stack, c.cur_a);
			ra(stack, 1);
		}
	}
	pa(stack, 1);
}

void    final_sorting(t_stack *stack)
{
	int cur_a;
	int i = -1;

	if ((stack->current_a % 2) != 0) 
	{
		cur_a = stack->current_a / 2 + 1;
	} else 
	{
		cur_a = stack->current_a / 2;
	}
	
	ft_find_maxmin_a(stack);

	if (stack->index_mina >= cur_a) 
	{
		while (++i < stack->current_a - stack->index_mina) 
		{
			rra(stack, 1);
		}
	} 
	else 
	{
		while (++i < stack->index_mina) 
		{
			ra(stack, 1);
		}
	}
}