/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:13:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 00:13:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "00_launcher.h"

int		strlen_launcher(void)
{
	t_unit_test *testlist = NULL;

	puts("STRLEN:");
	ut_load_test(&testlist, "Basic test", &basic_test);
	ut_load_test(&testlist, "NULL test", &null_test);
	ut_load_test(&testlist, "Bigger string test", &bigger_str_test);
	return (ut_launch_tests(&testlist));
}
