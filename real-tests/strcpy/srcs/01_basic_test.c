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

#include "../includes/01_basic_test.h"

int	basic_test(void)
{
	char *t1[100];

	if (ft_strcpy((char*)t1, "coco") == strcpy((char*)t1, "coco"))
		return (0);
	else
		return (-1);
}
