/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 02:43:39 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 12:55:25 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_stack **stack)
{
	if (!stack || !*stack)
		return ;
	ft_lstclear(&(*stack)->next);
	free (*stack);
	*stack = NULL;
}
