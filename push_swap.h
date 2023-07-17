/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:22:56 by mbasile           #+#    #+#             */
/*   Updated: 2023/07/17 16:38:22 by mbasile          ###   ########.fr       */
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

#endif