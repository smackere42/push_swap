/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:59:36 by anton             #+#    #+#             */
/*   Updated: 2022/03/15 15:23:30 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc <= 1)
		ft_error(NULL, NULL, 0);
	ft_create_stack(argv, argc, &stack_a);
	if (ft_sort_check(stack_a, argc))
		ft_error(&stack_a, NULL, 0);
	ft_sort(&stack_a, argc - 1);
}
