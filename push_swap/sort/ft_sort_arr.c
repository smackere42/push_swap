/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:22:17 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 14:02:55 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_arr(int *arr, int argc)
{
	int	elem;
	int	pos;
	int	i;

	elem = 0;
	i = 0;
	while (i < argc - 1)
	{
		elem = arr[i];
		pos = i - 1;
		while (pos >= 0 && arr[pos] > elem)
		{
			arr[pos + 1] = arr[pos];
			pos = pos - 1;
		}
		arr[pos + 1] = elem;
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("%d : %d\n", arr[i], i);
		i++;
	}
}
