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

static void				ut_parse_signal(t_suite_test *env, int signal)
{
	env->signal = signal;
	env->has_fail = 1;
	if (signal == SIGABRT)
		env->mess = "ABRT";
	if (signal == SIGSEGV)
		env->mess = "SEGV";
	if (signal == SIGBUS)
		env->mess = "BUSE";
	if (signal == SIGALRM)
		env->mess = "TIMEOUT";
}

static void				ut_parse_response(t_suite_test *env, int status)
{
	if (status == 0)
	{
		env->success += 1;
		env->mess = "OK";
	}
	else
	{
		env->has_fail = 1;
		env->mess = "KO";
	}
}

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

static int				ut_assert(t_suite_test *env, t_func_test fn)
{
	int		status;
	pid_t	childpid;

	childpid = fork();
	if (childpid < 0)
		return (-1);
	if (childpid == 0)
	{
		ualarm(TIMEOUT, 0);
		exit(fn());
	}
	if (childpid > 0)
	{
		wait(&status);
		if (WIFEXITED(status))
			ut_parse_response(env, WEXITSTATUS(status));
		if (WIFSIGNALED(status))
			ut_parse_signal(env, WTERMSIG(status));
		return (0);
	}
	return (-1);
}

int						ut_launch_tests(t_unit_test **list)
{
	t_suite_test	env;
	t_unit_test		*begin;

	env.has_fail = 0;
	env.success = 0;
	env.total = 0;
	if (list && *list)
	{
		begin = *list;
		while (begin)
		{
			if (ut_assert(&env, begin->testfunc) == 0)
			{
				printf("    > %s : [ %s ]\n", begin->name, env.mess);
				env.total += 1;
			}
			begin = begin->next;
		}
		printf("%d/%d test checked.\n", env.success, env.total);
		ut_delete_test_list(list);
	}
	return (env.has_fail ? -1 : 0);
}
