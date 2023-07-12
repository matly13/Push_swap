/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:28:01 by mbasile           #+#    #+#             */
/*   Updated: 2023/07/12 17:05:15 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkinput(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while(str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	char	**matrix;
	t_stack	*stack;
	int	i;

	matrix = NULL;
	stack = ft_calloc(1, sizeof(t_stack));
	if (ac == 2)
	{
		i = 0;
		matrix = ft_split(av[1], ' ');
		while (matrix[i])
		{
			if (!ft_checkinput(matrix[i]))
				ft_error();
			i++;
		}
		stack->size_a = i;
		stack->size_b = 0;
		stack->a = ft_calloc(i, sizeof(int));
		stack->b = ft_calloc(i, sizeof(int));
		i = 0;
		while (matrix[i])
		{
			if (ft_atoi(matrix[i]) > 2147483647 || ft_atoi(matrix[i]) < -2147483648)
				ft_error();
			stack->a[i] = ft_atoi(matrix[i]);
			printf("%d\n", stack->a[i]);
			i++;
		}
		
		printf("%d\n", i);
		// COTROLLO IS_DIGIT CON CARATTERE - DAVANTI (AV[X][0])
		// conteggio dello stack di A
		// ft_atoi --> MODIFICATO IN LONG LONG
		// CHECK SU MAX E MIN INT
		// RIEMPIRE LO STACK DI A
	}
	return 0;
}