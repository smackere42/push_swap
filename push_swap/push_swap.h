/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smackere <smackere@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:25:53 by anton             #+#    #+#             */
/*   Updated: 2022/03/15 15:43:39 by smackere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	struct s_stack	*next;
	int				index;
	int				data;
}	t_stack;

//commands
void	ft_rotate(t_stack **list);
void	ft_ra_rb_rr(t_stack **stack_a, t_stack **stack_b, char f);
void	ft_reverse(t_stack **list);
void	ft_rra_rrb_rrr(t_stack **stack_a, t_stack **stack_b, char f);
void	ft_swap(t_stack **list);
void	ft_sa_ss_sb(t_stack **stack_a, t_stack **stack_b, char f);
void	ft_push(t_stack **stack_1, t_stack **stack_2);
void	ft_pa_pb(t_stack **stack_a, t_stack **stack_b, char f);

//sort
void	ft_sort(t_stack **stack_a, int argc);
void	ft_sort_arr(int *arr, int argc);
int		ft_sort_check(t_stack *stack_a, int argc);
void	ft_sort_three(t_stack **stack_a);
void	ft_sort_four(t_stack **stack_a, t_stack **stack_b, int argc);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b, int argc);
void	ft_sort_b(t_stack **stack_a, t_stack **stack_b, int max_index, int argc);
void	ft_sort_big(t_stack **stack_a, t_stack **stack_b, int interval, int argc);

//utils
void	ft_error(t_stack **stack1, t_stack **stack2, int f);
void	ft_clear_stack(t_stack **stack);
long	ft_atoi(char *str);
int		ft_validcheck(char	*str);
int		ft_check_dub(int index, int *arr, int value);
void	push_back(t_stack **elem, t_stack *new_elem);
void	new_stack(int *arr, int argc, t_stack **stack, char **args);
void	ft_create_stack(char **argv, int argc, t_stack **stack_a);
int		ft_check_index(t_stack *stack_a, int index, int f, int argc);

//lst
t_stack	*ft_lstlast(t_stack *stack);
t_stack	*ft_lstnew(int index, int data);
void	ft_lstclear(t_stack **stack);

#endif