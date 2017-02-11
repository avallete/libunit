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
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <stdio.h>
# include "ft_signal.h"

typedef	int		(*t_func_test)(void);

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
