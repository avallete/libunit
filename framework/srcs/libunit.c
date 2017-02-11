/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:07:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 00:07:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void				ut_delete_test_list(t_unit_test **list)
{
	if (list && *list && (*list)->next)
		ut_delete_test_list(&((*list)->next));
	if (*list)
	{
		free((*list)->name);
		free((*list));
		*list = NULL;
	}
}

int						ut_launch_tests(t_unit_test **list) {
	t_unit_test *begin;

	if (list && *list)
	{
		begin = *list;
		while (begin)
		{
			printf("Name: %s  ::  %p", begin->name, begin->testfunc);
			begin = begin->next;
		}
		ut_delete_test_list(list);
	}
	return (0);
}
