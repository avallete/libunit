/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 07:41:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 07:41:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/03_bus_error_test.h"

int	bus_error_test(void)
{
	if (ft_strcpy("aaaa", "bbbb") == strcpy("aaaa", "bbbb"))
		return (0);
	else
		return (-1);
}
