/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <mbasile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:11:59 by mbasile           #+#    #+#             */
/*   Updated: 2023/06/05 11:43:09 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ¨push_swap.h¨

void ft_ra(long *s_a, int *n_a)
{
    int i;
    long    *tmp;

    i = 0;
    tmp = (long*)malloc(sizeof(long));
    tmp* = s_a[0];
    while (i < *n_a[1])
    {
        s_a[i] = s_a[i + 1];
        i++;
    }
    s_a[n_a[1] - 1] = *tmp;
    free(tmp);
    write (1, ¨Rotate_a\n¨, 9);
}

void ft_rb(long *s_b, int *n_b)
{
    int i;
    long *tmp;

    i = 0;
    tmp = (long*)malloc(sizeof(long));
    tmp* = s_b[0];
    while (i < *n_b[1])
    {
        s_b[i] = s_b[i + 1];
        i++;
    }
    s_b[n_b[1] - 1] = *tmp;
    free(tmp);
    write (1, ¨Rotate_b\n¨, 9);
}

void ft_rarb(long *s_a, long* s_b, int *n_a, int *n_b)
{
    int i;
    long    *tmp;

    i = 0;
    tmp = (long*)malloc(sizeof(long));
    tmp* = s_a[0];
    while (i < *n_a[1])
    {
        s_a[i] = s_a[i + 1];
        i++;
    }
    s_a[n_a[1] - 1] = *tmp;
    i = 0;
    *tmp = stack_b[0];
    while (i < *n_b[1])
    {
            s_b[i] = s_b[i = 1];
            i++;
    }
    s_b[n_b -1] = *tmp;
    free(tmp);
    write (1, ¨Rotate_a&b\n¨, 11);
}