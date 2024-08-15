/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enarindr <enarindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 07:31:48 by enarindr          #+#    #+#             */
/*   Updated: 2024/08/08 10:10:54 by enarindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libftprintf/libftprintf.h"
# include "./gnl/get_next_line_bonus.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_c_list
{
	struct s_c_list	*prev;
	long			*content;
	struct s_c_list	*next;
}		t_c_list;

int			ft_sa(t_c_list **a);
int			ft_sb(t_c_list **b);
int			ft_ss(t_c_list **a, t_c_list **b);
int			ft_ra(t_c_list **a);
int			ft_rb(t_c_list **b);
int			ft_rr(t_c_list **a, t_c_list **b);
int			ft_pb(t_c_list **a, t_c_list **b);
int			ft_pa(t_c_list **a, t_c_list **b);
int			ft_rra(t_c_list **a);
int			ft_rrb(t_c_list **b);
int			ft_rrr(t_c_list **a, t_c_list **b);

int			ft_first_moov(t_c_list **a, t_c_list **b);
int			ft_second_moov(t_c_list **a, t_c_list **b);
int			ft_same_moov(t_c_list **a, t_c_list **b, long val);
int			ft_moov_in_a(t_c_list **a, long small_coast);
int			ft_moov_in_b(t_c_list **a, t_c_list **b, long small_coast);
int			ft_small_big_moov(t_c_list **a, t_c_list **b);
int			ft_arrange_a(t_c_list **a);
int			ft_arrange_b(t_c_list **b);

int			ft_not_number(char **argv);
int			ft_not_integer(char **tab);
int			ft_all_space(char *str);
int			ft_empty(char **tab);
int			ft_is_all_signe(char **tab);
int			ft_repeat(long *tab_i, char **tab);
int			ft_lstfree(t_c_list **list);
int			ft_count_liste(t_c_list **list);
int			ft_short(t_c_list **a, t_c_list **b);
int			ft_reverse_short(t_c_list **a, t_c_list **b);
int			ft_is_short(t_c_list **list);
int			ft_is_reverse_short(t_c_list *list);
int			ft_three_short(t_c_list **list);
int			ft_big_short(t_c_list **a, t_c_list **b);
int			ft_big_short_reverse(t_c_list **a, t_c_list **b);
int			ft_moov_in_a_reverse(t_c_list **a, t_c_list **b, long small_coast);
int			ft_moov_in_b_reverse(t_c_list **b, long small_coast);
int			ft_small_big_moov_reverse(t_c_list **a, t_c_list **b);
int			ft_find_small_coast_reverse(t_c_list **a, t_c_list **b);
int			ft_coast_reverse(t_c_list *tmp, t_c_list **a, t_c_list **b);
int			ft_coast_in_a_reverse(t_c_list **a, long val);
int			ft_same_moov_reverse(t_c_list **a, t_c_list **b, long val);
int			ft_coast_in_a(t_c_list **a, long val);
int			ft_coast_in_b(t_c_list **b, long val);
int			ft_coast(t_c_list *tmp, t_c_list **a, t_c_list	**b);
int			ft_find_position(t_c_list *list, long val);
int			ft_smallest(t_c_list **b, long a);
int			ft_biggest(t_c_list **b, long a);

long		ft_find_small_coast(t_c_list **a, t_c_list **b);
long		ft_return_position(t_c_list **a, int position);
long		*ft_make_integer(char **tab);
long		ft_atol(const char *nptr);
long		ft_find_max(t_c_list *list);
long		ft_find_min(t_c_list *list);
long		ft_find_small(t_c_list **b, long a);
long		ft_find_big(t_c_list **a, long val);

float		ft_list_mean(t_c_list *list);

char		*ft_join_all(char **argv);
char		**ft_arrange_to_tab(char **argv);
char		**ft_check_error(int argc, char **argv);

void		ft_error(void);
void		ft_free(char **tab);
void		ft_exit_error(char **tab);
void		ft_exit_i(long *tab_i);
void		ft_exit(t_c_list *a, t_c_list *b, long *tab_i);
void		ft_add_back_list(t_c_list **list, t_c_list *new);
void		ft_pb_ext(t_c_list **a, t_c_list **b);

t_c_list	*ft_convert_list(long *tab_i, char **tab);
t_c_list	*ft_newlist(long *content);

#endif