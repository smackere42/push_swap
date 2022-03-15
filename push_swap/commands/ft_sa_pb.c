/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 03:17:00 by anton             #+#    #+#             */
/*   Updated: 2022/03/14 16:04:03 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack **list)
{
	t_stack	*tmp;
	t_stack	*head;

	if (!(*list) || !(*list)->next)
		return ;
	head = (*list)->next;
	tmp = head->next;
	head->next = *list;
	(*list)->next = tmp;
	*list = head;
}

void	ft_sa_ss_sb(t_stack **stack_a, t_stack **stack_b, char f)
{
	if (f == 'a')
	{
		ft_swap(stack_a);
		write(1, "sa\n", 3);
	}
	if (f == 'b')
	{
		ft_swap(stack_b);
		write(1, "sb\n", 3);
	}
	if (f == 's')
	{
		ft_swap(stack_a);
		ft_swap(stack_b);
		write(1, "ss\n", 3);
	}
}

void	ft_push(t_stack **stack_1, t_stack **stack_2)
{
	t_stack	*head;
	t_stack	*tmp;

	head = (*stack_1);
	*stack_1 = (*stack_1)->next;
	tmp = (*stack_2)->next;
	*stack_2 = head;
	(*stack_2)->next = tmp;
}

void	ft_pa_pb(t_stack **stack_a, t_stack **stack_b, char f)
{
	if (f == 'a')
	{
		ft_push(stack_b, stack_a);
		write(1, "pa\n", 3);
	}
	if (f == 'b')
	{
		ft_push(stack_a, stack_b);
		write(1, "pb\n", 3);
	}
}
