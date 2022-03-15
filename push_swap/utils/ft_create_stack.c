/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:06:25 by smackere          #+#    #+#             */
/*   Updated: 2022/03/15 15:40:53 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	new_stack(int *arr, int argc, t_stack **stack, char **argv)
{
	int	i;
	int	j;

	j = 0;
	while (argv[j])
	{
		i = 0;
		while (i < argc)
		{
			if (ft_atoi(argv[j]) == arr[i])
				push_back(stack, ft_lstnew(arr[i], i));
			i++;
		}
		j++;
	}
}

void	ft_create_stack(char **argv, int argc, t_stack **stack_a)
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(sizeof(int) * argc);
	while (i < argc)
	{
		if (!ft_validcheck(argv[i + 2]))
		{
			free(arr);
			ft_error(NULL, NULL, 1);
		}
		arr[i] = ft_atoi(argv[i + 1]);
		if (!ft_check_dub(i - 1, arr, arr[i]))
		{
			free(arr);
			ft_error(NULL, NULL, 1);
		}
		i++;
	}
	ft_sort_arr(arr, argc);
	new_stack(arr, argc - 1, stack_a, argv);
	free(arr);
}
