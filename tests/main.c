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
	printf("[ %s ]\n", strlen_launcher() == 0 ? "SUCCESS" : "FAIL");
	return (0);
}
