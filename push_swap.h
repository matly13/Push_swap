/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martina <martina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:22:56 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/03 11:52:43 by martina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libs/libft/libft.h"
# include "libs/ft_printf/ft_printf.h"

typedef struct s_stack
{
	int *a;
	int *b;
	int size_a;
	int size_b;
	int	max_a;
	int	min_a;
	int	max_b;
	int	min_b;

} t_stack;

void	ft_error(void);

/*MOVES*/

void	sa(t_stack *stack, int i);
void	sb(t_stack *stack, int i);
void	ss(t_stack *stack, int i);
void	ra(t_stack *stack, int p);
void	rb(t_stack *stack, int p);
void	rr(t_stack *stack, int p);
void	rra(t_stack *stack, int p);
void	rrb(t_stack *stack, int p);
void	rrr(t_stack *stack, int p);
void	pa(t_stack *stack, int p);
void	pb(t_stack *stack, int p);
int		check_sort(t_stack *stack);

void	check_maxmin_a(t_stack *stack);
void	check_maxmin_b(t_stack *stack);
void	sort_3(t_stack *stack);
void	sort_2(t_stack *stack);
void	sorting(t_stack *stack);
void	check_sorting(t_stack *stack);

void	quick_sort(t_stack *stack);
void	pntimes(t_stack *stack, int n);


#endif