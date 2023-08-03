/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:24:41 by martina           #+#    #+#             */
/*   Updated: 2023/08/03 11:44:37 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pntimes(t_stack *stack, int n)
{
    while (n-- > 0)
        pa(stack, 1);
}

void quick_sort(t_stack *stack)
{
    if (stack->size_a <= 1)
        return;

    int p = stack->a[stack->size_a - 1];
    int i = -1;
    int j = 0;

    while (++i < stack->size_a - 1)
    {
        if (stack->a[i] < p)
        {
            if (++j != i)
                sa(stack, 1);
        }
    }

    if (++j != stack->size_a - 1)
         sa(stack, 1);
            quick_sort(stack);
                pb(stack, 1);
            quick_sort(stack);
                pa(stack, 1);
}
