/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 06:03:39 by anton             #+#    #+#             */
/*   Updated: 2022/03/15 13:13:31 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_validcheck(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	if (ft_atoi(str) < INT32_MIN || ft_atoi(str) > INT32_MAX)
		return (0);
	return (1);
}

int	ft_check_dub(int index, int *arr, int value)
{
	while (index >= 0)
	{
		if (arr[index] == value)
		{
			free(arr);
			ft_error(NULL, NULL, 1);
		}
		index--;
	}
	return (1);
}
