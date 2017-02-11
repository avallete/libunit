/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:07:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 00:07:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_LIBUNIT_H
# define LIBUNIT_LIBUNIT_H
# define TEST_FMT "    > \033[36m%s\033[0m:	[%s]\n"
# define TOTAL_FMT "%d/%d test checked. "
# define TIMEOUT 1 * 1000 * 1000
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <stdio.h>

typedef	int				(*t_func_test)(void);

typedef struct			s_suite_test
{
	char				has_fail;
	int					signal;
	char				*mess;
	unsigned int		success;
	unsigned int		total;
	unsigned int		has_finish;
}						t_suite_test;

typedef struct			s_unit_test
{
	char				*name;
	t_func_test			testfunc;
	struct s_unit_test	*next;
}						t_unit_test;

int						ut_load_test(t_unit_test **list,\
									char *name,\
									t_func_test testfunc);
int						ut_launch_tests(t_unit_test **list);

char					*ut_strdup(char *src);
#endif
