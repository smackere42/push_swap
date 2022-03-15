/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:54:40 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 15:36:26 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_index(t_stack *stack_a, int index, int f, int argc)
{
	int	s;

	s = 0;
	while (stack_a)
	{
		if (stack_a->index == index)
			break ;
		s++;
		stack_a = stack_a->next;
	}
	if (f)
		return (s);
	if (s > argc / 2)
		return (0);
	else
		return (1);
}
