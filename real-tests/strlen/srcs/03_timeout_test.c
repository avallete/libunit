/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_timeout_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 10:49:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 10:49:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/03_strlen_timeout_test.h"

int	strlen_timeout_test(void)
{
	if (ft_strlen("coco") == strlen("coco"))
	{
		while (1)
		{
		}
		return (0);
	}
	else
		return (-1);
}
