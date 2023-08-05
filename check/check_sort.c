/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:56:27 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 19:26:11 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	checkdouble(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < stack->size_a)
	{
		tmp = stack->a[i];
		j = i;
		while (++j < stack->size_a)
		{
			if (tmp == stack->a[j])
				ft_error();
		}
	}
}

void	check_sorting(t_stack *stack)
{
	int	i;

	i = -1;
	if (stack->size_a == 2)
		sort_2(stack);
	else if (stack->size_a == 3)
		sort_3(stack);
	else
		sorting(stack);
	while (++i < stack->size_b)
		printf("B[%d] --> %d\n", i, stack->b[i]);
}
