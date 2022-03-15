/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 07:40:26 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 15:34:48 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_stack **stack_a, int argc)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (argc == 2)
		ft_sa_ss_sb(stack_a, NULL, 'a');
	if (argc == 3)
		ft_sort_three(stack_a);
	if (argc == 4)
		ft_sort_four(stack_a, &stack_b, argc);
	if (argc == 5)
		ft_sort_five(stack_a, &stack_b, argc);
	if (argc >= 6 && argc <= 101)
		ft_sort_big(stack_a, &stack_b, 15, argc);
	if (argc > 101)
		ft_sort_big(stack_a, &stack_b, 30, argc);
	ft_error(stack_a, &stack_b, 0);
}
