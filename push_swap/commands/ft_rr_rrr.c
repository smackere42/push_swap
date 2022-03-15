/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 04:52:43 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 08:44:12 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack **list)
{
	t_stack	*head;
	t_stack	*end;

	if (!*list)
		return ;
	end = *list;
	head = *list;
	while (end->next != NULL)
		end = end->next;
	*list = (*list)->next;
	end->next = head;
	end->next->next = NULL;
}

void	ft_ra_rb_rr(t_stack **stack_a, t_stack **stack_b, char f)
{
	if (f == 'a')
	{
		ft_rotate(stack_a);
		write(1, "ra\n", 3);
	}
	if (f == 'b')
	{
		ft_rotate(stack_b);
		write(1, "rb\n", 3);
	}
	if (f == 'r')
	{
		ft_rotate(stack_a);
		ft_rotate(stack_b);
		write(1, "rr\n", 3);
	}
}

void	ft_reverse(t_stack **list)
{
	t_stack	*head;
	t_stack	*end;

	head = *list;
	end = *list;
	while (end->next->next != NULL)
		end = end->next;
	*list = end->next;
	(*list)->next = head;
	end->next = NULL;
}

void	ft_rra_rrb_rrr(t_stack **stack_a, t_stack **stack_b, char f)
{
	if (f == 'a')
	{
		ft_reverse(stack_a);
		write(1, "rra\n", 4);
	}
	if (f == 'b')
	{
		ft_reverse(stack_b);
		write(1, "rrb\n", 4);
	}
	if (f == 'r')
	{
		ft_reverse(stack_a);
		ft_reverse(stack_b);
		write(1, "rrr\n", 4);
	}
}
