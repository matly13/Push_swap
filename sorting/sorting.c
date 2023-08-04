/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:24:41 by martina           #+#    #+#             */
/*   Updated: 2023/08/04 10:54:14 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_first(t_stack *stack)
{
    stack->current_b = 0;
    stack->min_b = (stack->a[0] > stack->a[1]) ? stack->a[1] : stack->a[0];
    stack->max_b = (stack->a[0] > stack->a[1]) ? stack->a[0] : stack->a[1];
    pb(stack, 1);
    pb(stack, 1);
}

int ft_sorting(t_stack *stack)
{
    if (stack->current_a == 3)
    {
        ft_sorting_a(stack);
        ft_close(stack);
        return 0;
    }
    ft_first(stack);
    return 2;
}
