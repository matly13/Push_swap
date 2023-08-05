/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:28:01 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 20:20:29 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freematrix(char **matrix)
{
	int	i;

	i = -1;
	while (matrix[++i])
		free(matrix[i]);
	free(matrix);
}

void	init_struct(t_stack *stack, int i)
{
	stack->size_a = i;
	stack->size_b = 0;
	stack->a = ft_calloc(i, sizeof(int));
	stack->b = ft_calloc(i, sizeof(int));
}

void	init_one(t_stack *stack, char **av)
{
	char	**matrix;
	int		i;

	matrix = ft_split(av[1], ' ');
	i = -1;
	while (matrix[++i])
	{
		if (!ft_checkinput(matrix[i]))
		{
			ft_freematrix(matrix);
			ft_error();
		}
	}
	init_struct(stack, i);
	i = -1;
	while (matrix[++i])
	{
		if (ft_atoi(matrix[i]) > 2147483647 || ft_atoi(matrix[i]) < -2147483648)
		{
			ft_freematrix(matrix);
			ft_error();
		}
		stack->a[i] = ft_atoi(matrix[i]);
	}
	ft_freematrix(matrix);
}

void	init_two(t_stack *stack, char **av, int ac)
{
	int	i;

	i = 0;
	stack->size_a = ac - 1;
	stack->size_b = 0;
	stack->a = ft_calloc(ac - 1, sizeof(int));
	stack->b = ft_calloc(ac - 1, sizeof(int));
	while (++i < ac)
	{
		if (!ft_checkinput(av[i]) && 
			(ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648))
			ft_error();
		stack->a[i - 1] = ft_atoi(av[i]);
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack;

	stack = ft_calloc(1, sizeof(t_stack));
	if (ac == 2)
		init_one(stack, av);
	else if (ac > 2)
		init_two(stack, av, ac);
	checkdouble(stack);
	if (check_sort(stack))
		check_sorting(stack);
	return (0);
}
