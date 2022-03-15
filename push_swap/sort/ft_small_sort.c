/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 08:33:19 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 15:57:14 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index
		&& (*stack_a)->index > (*stack_a)->next->next->index)
	{
		ft_ra_rb_rr(stack_a, NULL, 'a');
		if ((*stack_a)->index > (*stack_a)->next->index)
			ft_sa_ss_sb(stack_a, NULL, 'a');
		return ;
	}
	if ((*stack_a)->next->index > (*stack_a)->index
		&& (*stack_a)->next->index > (*stack_a)->next->next->index)
	{
		ft_rra_rrb_rrr(stack_a, NULL, 'a');
		if ((*stack_a)->index > (*stack_a)->next->index)
			ft_sa_ss_sb(stack_a, NULL, 'a');
		return ;
	}
	if ((*stack_a)->index > (*stack_a)->next->index)
	{
		ft_sa_ss_sb(stack_a, NULL, 'a');
		return ;
	}
}

void	ft_sort_four(t_stack **stack_a, t_stack **stack_b, int argc)
{
	while ((*stack_a)->index != 0)
	{
		if (ft_check_index(*stack_a, 0, 0, argc))
			ft_ra_rb_rr(stack_a, stack_b, 'a');
		else
			ft_rra_rrb_rrr(stack_a, stack_b, 'a');
	}
	if (ft_sort_check(*stack_a, argc - 1))
		return ;
	ft_pa_pb(stack_a, stack_b, 'b');
	ft_sort_three(stack_a);
	ft_pa_pb(stack_a, stack_b, 'a');
}

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b, int argc)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		while ((*stack_a)->index != i)
		{
			if (ft_check_index(*stack_a, i, 0, argc))
				ft_ra_rb_rr(stack_a, stack_b, 'a');
			else
				ft_rra_rrb_rrr(stack_a, stack_b, 'a');
		}
		ft_pa_pb(stack_a, stack_b, 'b');
		i++;
	}
	ft_sort_three(stack_a);
	ft_pa_pb(stack_a, stack_b, 'a');
	ft_pa_pb(stack_a, stack_b, 'a');
	if (!ft_sort_check(*stack_a, argc - 1))
		ft_sa_ss_sb(stack_a, stack_b, 'a');
}
