/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:38:09 by muel-bak          #+#    #+#             */
/*   Updated: 2023/12/19 13:01:10 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack_a)
{
	t_node	*first;
	t_node	*last;

	if (stack_a->top && stack_a->top->next)
	{
		first = stack_a->top;
		last = stack_a->top;
		while (last->next)
		{
			last = last->next;
		}
		stack_a->top = first->next;
		stack_a->top->prev = NULL;
		last->next = first;
		first->prev = last;
		first->next = NULL;
	}
}

void	rb(t_stack *stack_b)
{
	t_node	*first;
	t_node	*last;

	if (stack_b->top && stack_b->top->next)
	{
		first = stack_b->top;
		last = stack_b->top;
		while (last->next)
		{
			last = last->next;
		}
		stack_b->top = first->next;
		stack_b->top->prev = NULL;
		last->next = first;
		first->prev = last;
		first->next = NULL;
	}
}

void	rra(t_stack *stack_a)
{
	t_node	*first;
	t_node	*last;

	if (stack_a->top && stack_a->top->next)
	{
		first = stack_a->top;
		last = stack_a->top;
		while (last->next)
		{
			last = last->next;
		}
		last->prev->next = NULL;
		first->prev = last;
		last->next = first;
		last->prev = NULL;
		stack_a->top = last;
	}
}

void	rrb(t_stack *stack_b)
{
	t_node	*first;
	t_node	*last;

	if (stack_b->top && stack_b->top->next)
	{
		first = stack_b->top;
		last = stack_b->top;
		while (last->next)
		{
			last = last->next;
		}
		last->prev->next = NULL;
		first->prev = last;
		last->next = first;
		last->prev = NULL;
		stack_b->top = last;
	}
}
