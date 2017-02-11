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

#include "../includes/00_strlen_launcher.h"

int	strlen_launcher(void)
{
	t_unit_test *testlist;

	puts("\033[33mSTRLEN:\033[0m");
	testlist = NULL;
	ut_load_test(&testlist, "01_basic_test", &strlen_basic_test);
	ut_load_test(&testlist, "02_null_test", &strlen_null_test);
	ut_load_test(&testlist, "03_timeout_test", &strlen_timeout_test);
	ut_load_test(&testlist, "04_invalid_string_test",\
	&strlen_invalid_string_test);
	return (ut_launch_tests(&testlist));
}
