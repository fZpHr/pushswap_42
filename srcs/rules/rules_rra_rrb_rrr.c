/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rra_rrb_rrr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:39:53 by hbelle            #+#    #+#             */
/*   Updated: 2023/12/26 14:41:54 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rule_rra(t_swap *s)
{
	s->i = ft_count(s->a) - 1;
	s->tmp = s->a[s->i];
	while (s->i > 0)
	{
		s->a[s->i] = s->a[s->i - 1];
		s->i--;
	}
	s->a[0] = s->tmp;
}

void	rule_rrb(t_swap *s)
{
	s->i = ft_count(s->b) - 1;
	s->tmp = s->b[s->i];
	while (s->i > 0)
	{
		s->b[s->i] = s->b[s->i - 1];
		s->i--;
	}
	s->b[0] = s->tmp;
}

void	rule_rrr(t_swap *s)
{
	rule_rrb(s);
	rule_rra(s);
}