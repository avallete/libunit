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

#include "./strcpy/includes/00_launcher.h"
#include "./strlen/includes/00_strlen_launcher.h"

int	main(void)
{
	unsigned int has_fail;

	has_fail = 0;
	if (strcpy_launcher() != 0)
		has_fail = 1;
	if (strlen_launcher() != 0)
		has_fail = 1;
	return (has_fail ? -1 : 0);
}
