/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:10:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 00:10:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "00_launcher.h"

int	main(void)
{
	unsigned int has_fail = 0;
	if (printf("[ %s ]\n", strcpy_launcher() == 0 ? "SUCCESS" : "FAIL") == 9)
		has_fail = 1;
	return (has_fail ? -1 : 0);
}
