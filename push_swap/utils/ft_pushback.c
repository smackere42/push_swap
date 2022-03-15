/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:50:31 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 15:41:45 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_back(t_stack **elem, t_stack *new_elem)
{
	t_stack	*tmp;

	if (!*elem || !new_elem)
		return ;
	if (!*elem)
	{
		elem = &new_elem;
		return ;
	}
	tmp = ft_lstlast(*elem);
	tmp->next = new_elem;
}
