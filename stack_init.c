/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:39:38 by yaso              #+#    #+#             */
/*   Updated: 2025/07/16 16:30:57 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long ft_atol(const char *s)
{
    long    result;
    int     sign;

    result = 0;
    sign = 1;
    while (*s == ' ' || *s == '\t' || *s == '\n' || \
            *s == '\r' || *s == '\f' || *s == '\v')
        s++;
    if (*s == '-' || *s == '+')
    {
        if (*s == '-')
            sign = -1;
        s++;
    }
    while (ft_isdigit(*s))
        result = result * 10 + (*s++ - '0');
    return (result * sign);
}

static void append_node(t_stack_node **stack, int n)
{
    t_stack_node    *node;
    t_stack_node    *last_node;

    if (!stack)
        return;
    node -> next = NULL;
    node -> nbr = n;
    if (!(*stack))
    {
        *stack = node;
        node -> prev = NULL;
    }
    else{
        last_node = find_last(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}


void    init_stack_a(t_stack_node **a, char **argv)
{
    long    n;
    int     i;

    i = 0;
    while (argv[i])
    {
        if (error_syntax(argv[i]))
            free_errors(a);
        n = ft_atol(argv[i]);
        if (n > INT_MAX || n < INT_MIN)
            free_errors(a);
        if (error_duplicate(*a, (int)n))
            free_errors(a);
        append_node(a, (int)n);
        i++;
    }
}