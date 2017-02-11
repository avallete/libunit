/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:13:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 13:12:41 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "00_launcher.h"

int		strcpy_launcher(void)
{
	t_unit_test *testlist;

	puts("\033[33mSTRCPY:\033[0m");
	testlist = NULL;
	ut_load_test(&testlist, "Basic test", &basic_test);
	//ut_load_test(&testlist, "NULL test", &null_test);
	//ut_load_test(&testlist, "BusError test", &bus_error_test);
	//ut_load_test(&testlist, "Error test", &error_test);
	return (ut_launch_tests(&testlist));
}
