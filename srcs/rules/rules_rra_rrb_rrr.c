/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rra_rrb_rrr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:39:53 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/29 18:22:58 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_rra(t_swap *s)
{
	int i;

	i = 0;
	i = ft_count(s->a) - 1;
	s->tmp = s->a[i];
	while (i > 0)
	{
		s->a[i] = s->a[i - 1];
		i--;
	}
	s->a[0] = s->tmp;
}

void	rule_rrb(t_swap *s)
{
	int i;

	i = 0;
	i = ft_count(s->b) - 1;
	s->tmp = s->b[i];
	while (i > 0)
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[0] = s->tmp;
}

void	rule_rrr(t_swap *s)
{
	rule_rrb(s);
	rule_rra(s);
}