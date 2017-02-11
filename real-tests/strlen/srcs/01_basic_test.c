/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:13:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 00:13:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/01_strlen_basic_test.h"

int	strlen_basic_test(void)
{
	if (ft_strlen("coco") == strlen("coco"))
		return (0);
	else
		return (-1);
}
