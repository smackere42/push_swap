/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 02:59:46 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 15:41:22 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_clear_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	if (!stack)
		return ;
	while ((*stack)->next)
	{
		tmp = (*stack)->next;
		free(stack);
		*stack = tmp;
	}
}

void	ft_error(t_stack **stack1, t_stack **stack2, int f)
{
	if (stack1)
		ft_lstclear(stack1);
	if (stack2)
		ft_lstclear(stack2);
	if (f)
		write (2, "Error\n", 6);
	exit (0);
}
