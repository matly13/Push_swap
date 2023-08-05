/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:22:56 by mbasile           #+#    #+#             */
/*   Updated: 2023/08/05 11:39:00 by mbasile          ###   ########.fr       */
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

typedef struct s_curr 
{
	int	cur_a;
	int	cur_b;
	int	tmp_moves;
} t_curr;

typedef struct s_push
{
	int	idx_a;
	int	idx_b;
	int	mv;
} t_push;

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	int		max_a;
	int		min_a;
	int		max_b;
	int		min_b;
	int		index_maxa;
	int		index_mina;
	int		index_maxb;
	int		index_minb;
	t_curr	tmp;
	t_push	push;

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

void	ft_close(t_stack *stack);
void	ft_sorting_a(t_stack *stack);
void	ft_first(t_stack *stack);
int		ft_sorting(t_stack *stack);
void	ft_pushing_to_a(t_stack *stack);
void    ft_find_maxmin_a(t_stack *stack);
void	final_sorting(t_stack *stack);

t_push	ft_new_cheapest(int i, int tmp_b, t_push topush);
t_push	ft_index_under(int i, int tmp_b, t_push topush);
t_push	ft_index_over(t_stack *stack, int i, int tmp_b, t_push topush);


#endif