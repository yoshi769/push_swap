/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:34:05 by yaso              #+#    #+#             */
/*   Updated: 2025/07/16 16:43:01 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool    stack_sorted(t_stack_node *stack)
{
    if (!stack)
        return (1);
    while (stack -> next)
    {
        if (stack->nbr > stack->next->nbr)
            return (false);
        stack = stack ->next;
    }
    return (true);
}

t_stack_node    *find_min(t_stack_node *stack)
{
    long    min;
    t_stack_node    *min_node;

    if (!stack)
        return (NULL);
    min = LONG_MAX;
    while (stack)
    {
        if (stack->nbr < min)
        {
            min = stack->nbr;
            min_node = stack;
        }
        stack = stack->next;
    }
    return (min_node);
}