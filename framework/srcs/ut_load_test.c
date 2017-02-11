/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:26:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 01:26:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_unit_test	*new_test(char *name, t_func_test testfunc)
{
	t_unit_test *new;

	if (!name || !(name[0]) || !testfunc)
		return (NULL);
	if (!(new = (t_unit_test*)malloc(sizeof(t_unit_test))))
		return (NULL);
	if (!(new->name = ut_strdup(name)))
	{
		free(new);
		return (NULL);
	}
	new->testfunc = testfunc;
	new->next = NULL;
	return (new);
}

int					ut_load_test(t_unit_test **list,\
								char *name,\
								t_func_test testfunc)
{
	t_unit_test *begin;

	if (!list)
		return (-1);
	if (!(*list))
	{
		*list = new_test(name, testfunc);
		return ((*list) ? 0 : -1);
	}
	begin = *list;
	while (begin->next)
		begin = begin->next;
	begin->next = new_test(name, testfunc);
	return (begin->next ? 0 : -1);
}
