/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:17:13 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 15:42:12 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_b(t_stack **stack_a, t_stack **stack_b, int max_index, int argc)
{
	int	place;
	int	half;

	while (*stack_b)
	{
		half = (max_index + 1) / 2;
		place = ft_check_index(*stack_b, max_index, 1, argc);
		if ((*stack_b)->index == max_index)
		{
			ft_pa_pb(stack_a, stack_b, 'a');
			max_index--;
		}
		else if (place <= half)
			ft_ra_rb_rr(stack_a, stack_b, 'b');
		else
			ft_rra_rrb_rrr(stack_a, stack_b, 'b');
	}
}

void	ft_sort_big(t_stack **stack_a, t_stack **stack_b,
			int interval, int argc)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if (i > 1 && (*stack_a)->index <= i)
		{
			ft_pa_pb(stack_a, stack_b, 'b');
			ft_ra_rb_rr(NULL, stack_b, 'b');
			i++;
		}
		else if ((*stack_a)->index <= (i + interval))
		{
			ft_pa_pb(stack_a, stack_b, 'b');
			i++;
		}
		else if ((*stack_a)->index >= i)
			ft_ra_rb_rr(stack_a, stack_b, 'a');
	}
	ft_sort_b(stack_a, stack_b, argc - 1, argc);
}
